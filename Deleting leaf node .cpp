class Solution {
public:
    TreeNode* deleteNode(TreeNode* root, int key) {
        if(root->val == key ) return NULL;
        else if(root->val > key ) root-> left = deleteNode(root->left,key);
        else if(root->val < key ) root-> right = deleteNode(root->right, key);
        return root;
        }

        
};
