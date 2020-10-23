/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
    
vector<int> res;
    
    void dfs(TreeNode *root){
        if(root==NULL) return;
        else res.push_back(root->val);
        dfs(root->left);
        dfs(root->right);
    }
public:
    bool isUnivalTree(TreeNode* root) {
        dfs(root);
        int mark = res[0];
        for(int i=1;i<res.size();i++){
            if(res[i]!=mark){
                return false;
            }
        }
        return true;
        
    }
};
