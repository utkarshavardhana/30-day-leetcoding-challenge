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
    
    bool existPath(TreeNode* root, vector<int> arr, int index, int n) {
        if (root == NULL)   return (n == 0); 

       if ((root->left == NULL && root->right == NULL) && (index == n-1) && (root->val == arr[index])) 
                return true; 

       return ((index < n) && (root->val == arr[index]) && 
               (existPath(root->left, arr,  index+1, n) ||
                existPath(root->right, arr, index+1, n) 
               ));

    }
    
    bool isValidSequence(TreeNode* root, vector<int>& arr) {
        if(arr.empty() or !root) return false;
        return existPath(root, arr, 0, arr.size());
    }
};
