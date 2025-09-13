class Solution {
public:
    void inorder(TreeNode* root, std::vector<int>& ans) {
        if (root == NULL) {
            return; // base case
        }
        inorder(root->left, ans); // left
        ans.push_back(root->val); // root
        inorder(root->right, ans); // right
    }

    bool isValidBST(TreeNode* root) {
        std::vector<int> ans;
        inorder(root, ans);

        for (int i = 1; i < ans.size(); i++) {
            if (ans[i] <= ans[i - 1]) {
                return false;
            }
        }
        return true;
    }
};

