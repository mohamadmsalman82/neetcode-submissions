class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        //BRUTE FORCE SOLUTION
        //return indices not values
       /* for(int i = 0; i < nums.size(); i++){
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
    } */

    //OPTIMAL SOLUTION

        unordered_map<int,int> seen;          // value -> index it was found at

        for (int i = 0; i < nums.size(); i++) {
            int need = target - nums[i];      // the partner that completes the sum

            if (seen.count(need))             // have I already walked past it?
                return {seen[need], i};       // yes -> earlier index, current index

            seen[nums[i]] = i;                // no  -> file this one away
        }

        return {};                            // unreachable; the problem guarantees an answer
    }


};
