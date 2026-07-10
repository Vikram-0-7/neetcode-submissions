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
TreeNode* i(TreeNode* root, int val,TreeNode* prev){
    if(!root) {
            TreeNode* n=new TreeNode(val);
            if(prev->val>val){
                prev->left=n;
            }
            else{
                prev->right=n;
            }
            return n;
        }
        if(root->val>val){
            i(root->left,val,root);
        }
        else if(root->val<val){
            i(root->right,val,root);
        }
        return root;
}
    TreeNode* insertIntoBST(TreeNode* root, int val) {
        if(!root){
            TreeNode* n=new TreeNode(val);
            root=n;
            return root;

        };
        i(root,val,root);
        return root;
    }
};