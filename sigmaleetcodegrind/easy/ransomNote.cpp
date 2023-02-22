class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        // since our characters are lowercase
        // constant memory 
        int arr[26] = {0};

        for (int i = 0; i < magazine.length(); i++){
            arr[magazine[i] - 'a']++;
        }
        for (int i = 0; i < ransomNote.length(); i++){
            arr[ransomNote[i] - 'a']--;
            if (arr[ransomNote[i] - 'a'] < 0) return false;
        }
        return true;
    }
};
