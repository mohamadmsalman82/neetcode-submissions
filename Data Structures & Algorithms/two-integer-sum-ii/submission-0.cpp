class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {

        vector<int> res;

        int* p = &numbers[0];
        int* q = &numbers[numbers.size() - 1];

        while( p < q){
            if(*p + *q == target){
                res.push_back(p - &numbers[0] + 1);
                res.push_back(q - &numbers[0] + 1); 
                return res;   
            } else if (*p + *q < target)p++;
            else q--; 
        }
        return {};
    }
};
