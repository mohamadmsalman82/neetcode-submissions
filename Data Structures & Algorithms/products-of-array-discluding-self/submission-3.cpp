class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int> prefix;
        vector<int> postfix;
        vector<int> result;
        int prod = 1;

        for(int i = 0 ; i < nums.size(); i++){
            prod *= nums[i];
            prefix.push_back(prod);
        }

        prod = 1;

        for(int j = nums.size() - 1 ; j >= 0; j-- ){
            prod *= nums[j];
            postfix.push_back(prod);
        }

        reverse(postfix.begin(), postfix.end());

        for(int i = 0; i < nums.size(); i++){
        int before = i-1;
        int after = i + 1;

        if(before < 0){
            result.push_back(postfix[after]);
    

        }else if(after >= nums.size()){
            result.push_back(prefix[before]);
        }else{

        int val = prefix[before] * postfix[after];

        result.push_back(val);
        }
        }

        return result;


    }
};


