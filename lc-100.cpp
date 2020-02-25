/*************************************************************************
	> File Name: lc-100.cpp
	> Author: 
	> Mail: 
	> Created Time: 2020年02月25日 星期二 21时26分58秒
 ************************************************************************/
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */


bool isSameTree(struct TreeNode* p, struct TreeNode* q){
        if( p == NULL&&q==NULL) return 1;
        if( p == NULL && q!=NULL || p!=NULL && q == NULL)    return 0;
        if(p->val != q->val)return 0;
        else{
            return (isSameTree(p->left,q->left) && isSameTree(p->right,q->right) );
        }
        
}
