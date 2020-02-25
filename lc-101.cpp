/*************************************************************************
	> File Name: lc-101.cpp
	> Author: 
	> Mail: 
	> Created Time: 2020年02月25日 星期二 21时27分19秒
 ************************************************************************/
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */

bool is_val(struct TreeNode* p, struct TreeNode* q){
        if( p == NULL && q==NULL) return 1;
        if( (p == NULL  &&  q!=NULL) ||( p!=NULL && q == NULL)    )return 0;
        if(p->val != q->val)return 0;
        else{
            return (is_val(p->left,q->right) && is_val(p->right,q->left) );
        }
        
}

bool isSymmetric(struct TreeNode* root){
    if(root == NULL)return 1;
    if(root->left ==NULL && root->right == NULL)return 1;
    if(root->left == NULL && root->right != NULL || root->left != NULL && root->right == NULL)return 0;
    return is_val(root->left, root->right);
}
