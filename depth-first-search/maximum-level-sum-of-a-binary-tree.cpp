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
        map<int,int>mpp;
        void dfs(TreeNode* root,int level){
          if(root==NULL) return;
           mpp[level] += root->val;;

            dfs(root->left,level+1);
            dfs(root->right,level+1);
        }
    int maxLevelSum(TreeNode* root) {

        dfs(root,1);
        int maxSum=INT_MIN;
        int anslevel=1;

        for(auto it:mpp){
            if(it.second>maxSum){
                maxSum=it.second;
                anslevel=it.first;
            }
        }
        return anslevel;
    }
};