class Solution {
public:
    bool isPalindrome(string s) {
        if (s.empty()) return true;

        char* p = &s[0];
        char* q = &s[s.size() - 1 ];

        while( q > p){
            while(q > p && !isalnum(*p))p++;

            while(q > p && !isalnum(*q))q--;
            
        if(tolower((unsigned char)*p) != tolower((unsigned char)*q)) return false;
        p++;
        q--;
        }
        return true;
    }
};
