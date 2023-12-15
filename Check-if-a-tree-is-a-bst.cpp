class Solution {

public:

    bool IsBSTHelper(TreeNode* node, int smallest, int biggest)
    {
        if(node == NULL)
            return true; 
    
        int data = node->val;
        if(smallest != -1 && data <= smallest) return false; 
        if(biggest != -1 && data >= biggest) return false; 

        if(! IsBSTHelper(node->right, data, biggest)) return false;

        if (! IsBSTHelper(node->left, smallest, data)) return false;         
        return true;
    }
    
     bool isValidBST(TreeNode* root) {
        return IsBSTHelper(root, -1,-1);
   }
};