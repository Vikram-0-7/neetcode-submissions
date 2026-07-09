/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */

class Solution {
   public:
    int c = 0, result = 0;

    int d(TreeNode* root) {
        if (!root) return 0;
        return 1 + max(d(root->left), d(root->right));
    }
    void traverse(TreeNode* root) {
        if (!root) return;
        int left = d(root->left);
        int right = d(root->right);

        result = max(result, left + right);
        traverse(root->left);
        traverse(root->right);
    }
    int diameterOfBinaryTree(TreeNode* root) {
        if (!root) return 0;
        traverse(root);
        return result;
    }
};
