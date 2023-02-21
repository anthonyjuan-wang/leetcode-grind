class Solution {
public:
    bool ans = true;
    int solve(TreeNode* root)
    {
        if(root == NULL)
            return 0;
        int left = solve(root->left);
        int right = solve(root->right);
        if(abs(left-right)>1)
            ans = false;
        return max(left,right)+1;
    }
    bool isBalanced(TreeNode* root) {
        solve(root);
        return ans;
    }
};
