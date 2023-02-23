class Solution {
public:
    int majorityElement(vector<int>& nums) {

        /* hashmap solution
        unordered_map<int, int> hash;
        int res;
        for (int i = 0; i < nums.size() ; i++){
            hash[nums[i]]++;
            if (hash[nums[i]] > (nums.size()/2)) return nums[i];
        } 
         return 0;
         */


        // algo solution (ingenius)
        int counter = 0;
        int candidate;
        for (int i = 0; i < nums.size(); i++){
            if (counter == 0){
                 candidate = nums[i];
                 counter++;
            }
            else if (nums[i] == candidate){
                counter++;
            }
            else {
                counter--;
            }
        } return candidate;
    }
};
