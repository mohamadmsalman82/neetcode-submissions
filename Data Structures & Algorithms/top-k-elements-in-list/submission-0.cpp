class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int> map;

        
        
        for(int i = 0 ; i< nums.size(); i++){
            map[nums[i]]++;
        }

        vector<vector<int>> buckets(nums.size()+1); //initalize buckets to categorize values by freq.

        for(auto& [nums, count] : map){
            buckets[count].push_back(nums);
        } //push the values

        vector<int> res;
        for (int c = buckets.size()-1; c > 0; c--){
            for (int num : buckets[c]){
                res.push_back(num);
                if (res.size() == k) return res;
            }
        }
        return res;





        

        
        
    }
};
