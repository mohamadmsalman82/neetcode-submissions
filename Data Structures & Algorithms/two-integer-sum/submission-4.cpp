class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        //return indices not values
        for(int i = 0; i < nums.size(); i++){
            for(int j = i+1; j < nums.size(); j++){
            if(nums[i] + nums[j] == target){
                if(j<i){
                    return vector<int>{j, i};
                }
                return vector<int>{i,j};
            }
        }
        }


        
        
    return {};
    }
};
