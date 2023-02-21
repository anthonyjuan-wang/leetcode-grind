class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> res;
        // sort the number array
        std::sort (nums.begin(), nums.end());
        //-1,-1,0,1,2,-4;
        int l; 
        int r;
        for (int i = 0; i < nums.size(); i++){
            if (i > 0 && nums[i] == nums[i - 1]) continue;
            l = i + 1;
            r = nums.size() - 1;
            while (l < r){
                int threeSum = nums[i] + nums[l] + nums[r];
                if (threeSum > 0){
                    r--;
                }
                else if (threeSum < 0){
                    l++;
                }
                else{
                    res.push_back({nums[i], nums[l], nums[r]});
                    l++;
                    while (nums[l] == nums[l - 1] && l < r) l++;
                }
                
            }
        }
        return res;
    }
};
