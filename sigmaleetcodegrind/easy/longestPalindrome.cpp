class Solution {
public:
    int longestPalindrome(string s) {
        unordered_map<char, int> hash;
        if (s.length() == 1) return 1;
        int count = 0;
        for (int i = 0; i < s.length(); i++){
            if (hash[s[i]]){
                count++;
                hash.erase(s[i]);
            }
            else {
                hash[s[i]]++;
            } 
           
        }
         if (hash.empty()) return 2*count;
         return 2*count + 1;   
    }
};
