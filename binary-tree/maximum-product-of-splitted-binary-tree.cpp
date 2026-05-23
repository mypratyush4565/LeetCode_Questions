class Solution {
public:
    long long totalSum = 0;
    long long best = 0;
    const int MOD = 1e9 + 7;

    long long dfs(TreeNode* root) {
        if (!root) return 0;

        long long left = dfs(root->left);
        long long right = dfs(root->right);

        long long subSum = left + right + root->val;

        best = max(best, subSum * (totalSum - subSum));

        return subSum;
    }

    int maxProduct(TreeNode* root) {
        // First pass: compute total sum
        totalSum = dfsTotal(root);

        // Second pass: compute max product
        dfs(root);

        return best % MOD;
    }

private:
    long long dfsTotal(TreeNode* root) {
        if (!root) return 0;
        return root->val + dfsTotal(root->left) + dfsTotal(root->right);
    }
};
