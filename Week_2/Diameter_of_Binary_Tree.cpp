/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
    pair<int,int> dfs(TreeNode* root){
        if(root==NULL){
            return{0,0};
        }
        pair<int,int> left=dfs(root->left);
        pair<int,int> right=dfs(root->right);
        int d=max({left.first,right.first,left.second+right.second});
        return {d,max(left.second,right.second)+1};
    }
public:
    int diameterOfBinaryTree(TreeNode* root) {
        return dfs(root).first;
    }
};