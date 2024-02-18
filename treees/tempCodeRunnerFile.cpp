 if (root->left == NULL and root->right == NULL)
    {
        return root->val;
    }
    if (root->left == NULL)
    {
        return solve(root->right) * 10 + root->val;
    }
    if (root->right == NULL)
    {
        return solve(root->left) * 10 + root->val;
    }
    int left = solve(root->left);