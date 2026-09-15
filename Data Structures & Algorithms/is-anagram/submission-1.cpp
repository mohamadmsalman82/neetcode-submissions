class Solution {
public:
    bool isAnagram(string s, string t) {
        if (s.size() != t.size()) return false;
        /*sort(s.begin(), s.end()); 
        sort(t.begin(), t.end());
        return s==t;*/

        vector<int> count(26,0); //creates a vector that has 26 integers -> all zero
        
        for (char c : s) count[ c - 'a']++;
        for (char c : t) count[ c - 'a']--;

        for (int n : count) {
            if (n != 0) return false;
        }

        return true;
    }
};
