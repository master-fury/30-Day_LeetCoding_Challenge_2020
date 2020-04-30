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
    TreeNode* helper(const vector<int>& preorder, int& id,int limit){
        if(id==(int) preorder.size() || preorder[id] > limit){
            return NULL;
        }
        int root_value = preorder[id];
        TreeNode* root= new TreeNode (root_value);
        id++;
        root->left=helper(preorder,id,root_value);
        root->right=helper(preorder,id,limit);
        return root;
    }
public:
    TreeNode* bstFromPreorder(vector<int>& preorder) {
        int id=0;
        return helper(preorder,id,INT_MAX);
    }
};