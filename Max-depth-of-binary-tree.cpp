class Solution {
public:
    int maxDepth(TreeNode* root) {
        if(root == NULL) 
            return 0;
        
        int left_max = maxDepth(root->left);
        int right_max = maxDepth(root->right);
        return max(left_max, right_max)+1;
    }
};