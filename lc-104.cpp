/*************************************************************************
	> File Name: lc-104.cpp
	> Author: 
	> Mail: 
	> Created Time: 2020年02月25日 星期二 21时27分47秒
 ************************************************************************/
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */


int maxDepth(struct TreeNode* root){
      if(!root)return 0;
      
  int left = maxDepth(root->left);
   int right = maxDepth(root->right);
    return 1+(left>right?left:right);
}
