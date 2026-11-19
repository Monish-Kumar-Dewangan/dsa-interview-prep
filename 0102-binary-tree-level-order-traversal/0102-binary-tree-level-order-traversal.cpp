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
    void traversal(TreeNode* root, vector<vector<int>> &res, int i) {
        if(root==NULL) return;
        if(res.size()==i) {
            res.push_back({});
        }
        res[i].push_back(root->val);
        traversal(root->left, res, i+1);
        traversal(root->right, res, i+1);
    }

    vector<vector<int>> levelOrder(TreeNode* root) {
        vector<vector<int>> res;
        traversal(root, res, 0);
        return res;
    }
};