class Solution {
public:
    TreeNode* invertTree(TreeNode* root) {

        if (root == NULL)
            return NULL;

        // Swap left and right child
        swap(root->left, root->right);

        // Invert subtrees
        invertTree(root->left);
        invertTree(root->right);

        return root;
    }
};
