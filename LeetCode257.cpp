/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */


/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
//树的节点个数
int getPathCnt(struct TreeNode *root){
    if(root == NULL) return 0;
    if(root->left == NULL && root->right == NULL) return 1;
    return getPathCnt(root->left) + getPathCnt(root->right);
}
//dfs深度优先搜索
//ｋ是第几条路经；
int getResult(struct TreeNode *root, int len , int k, char  **ret, char*buff){
    if(root == NULL) return 0;
    len += sprintf(buff + len,"%d", root->val);
    buff[len] = 0;
    if(root->left == NULL && root->right == NULL){ //到底
        ret[k] = strdup(buff);//字符串拷贝
        return 1;
    }
    len += sprintf(buff + len, "->");//记录写的位置,->占两格，len再加一
    int cnt = getResult(root->left, len, k , ret,buff);//左子树的路径数
    cnt += getResult(root->right, len, k + cnt,ret,buff );//从cnt位后加上右子树路径数
    return cnt;//增加节点个数；路径长度
}

char ** binaryTreePaths(struct TreeNode* root, int* returnSize){
    int pathCnt = getPathCnt(root);//记录节点数
    char **ret = (char **)malloc(sizeof(char *) * pathCnt);
    int max_len = 1024;
    char *buff = (char *)malloc(sizeof(char ) * max_len);
     getResult(root, 0,  0, ret, buff);
     *returnSize = pathCnt;//路径个数
     return ret;
}
