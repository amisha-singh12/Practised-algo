class Solution {
public:
    int firstUniqChar(string s) {
        int hash[128] = {0};
        for(int i = 0; i < s.size() ; i++) {
            hash[s[i]] += 1;
        }
         for(int i = 0; i < s.size() ; i++) {
            if(hash[s[i]] == 1 ) {
                return i;
            } 
         }
    return -1;
    }
};