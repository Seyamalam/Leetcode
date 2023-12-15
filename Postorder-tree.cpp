class Solution {
public:
    vector<int>s;
    void postOrder(TreeNode *root)
    {
        if(root  == NULL)
            return;
        postOrder(root->left);
        postOrder(root->right);
        s.push_back(root->val);

    }
    
    vector<int> postorderTraversal(TreeNode* root) {
        postOrder(root);
        return s; 
    }
};