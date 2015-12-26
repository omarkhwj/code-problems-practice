/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */
struct TreeNode* invertTree(struct TreeNode* root) {
    if(!root)
        return root;
        
    struct TreeNode *temp = root->left;
    root->left = root->right;
    root->right = temp;
    
    if (temp)
        invertTree(temp);
    if (root->left)
        invertTree(root->left);
    
    return root;
}
