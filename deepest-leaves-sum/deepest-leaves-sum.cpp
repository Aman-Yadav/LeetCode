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
    int max_depth;
    int deepestLeavesSum(TreeNode* root) {
        max_depth = depthf(root);
        return helper(root,0);
    }
    int helper ( TreeNode* root, int depth){
        if(!root) return 0;
        if(depth == max_depth - 1) return root->val;
        return helper(root->left, depth + 1)+ helper(root->right,depth+1);
    }
    int depthf(TreeNode* root){
        if(root == NULL) return 0;
        return max( 1+depthf(root->left), 1+depthf(root->right));
    }
};