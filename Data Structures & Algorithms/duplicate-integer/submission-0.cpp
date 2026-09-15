class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        unordered_set<int> seen; 
        // hash set O(1)
        // use unordered unless you need sorted order
        for (int n : nums) {
            if (seen.count(n)) return true;
            seen.insert(n);
        }
        
        return false;
       
        
    }
};