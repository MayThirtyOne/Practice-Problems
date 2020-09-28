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
public:
    vector<int> vv;
    void fill_vector(TreeNode* root){
        if(root==NULL) return;
        else vv.push_back(root->val);
        fill_vector(root->left);
        fill_vector(root->right);
        
    }
    int kthSmallest(TreeNode* root, int k) {
        fill_vector(root);
        sort(vv.begin(),vv.end());
        return vv[k-1];
        
    }
};
