
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        // Create hash map
        unordered_map<int,int> hash;
        // result that we return
        vector <int> result; 
        for (int i = 0; i < nums.size(); i++){
            // if the value already exists 
            if (hash.count(target - nums[i])){
             result.push_back (hash[target-nums[i]]);
             result.push_back (i);
                return result;
            }
            else {
                // Change the place where the number exists to store the index 
                hash[nums[i]] = i;
            }    
        }
        return result;
    }
};
