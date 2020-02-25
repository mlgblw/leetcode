/*************************************************************************
	> File Name: lc-110.cpp
	> Author: 
	> Mail: 
	> Created Time: 2020年02月25日 星期二 21时26分36秒
 ************************************************************************/
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */
int depth(struct TreeNode *root){
    if(!root) return 0;
    return depth(root->right ) >  depth(root->left)? depth(root->right)+1 : depth(root->left) + 1;
}
int ans(int a ,int b){
    return a>b? (a-b):(b-a);
}
bool isBalanced(struct TreeNode* root){
       if(!root)return 1;
        int dep =ans (depth(root->left) , depth(root->right) );
        if(dep <=1 && isBalanced(root->right) && isBalanced(root->left)){
            return 1;
        }
        return 0;
}
