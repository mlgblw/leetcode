/*************************************************************************
	> File Name: lc-273.cpp
	> Author: 
	> Mail: 
	> Created Time: 2020年02月25日 星期二 21时23分55秒
 ************************************************************************/
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    void deleteNode(ListNode *node) {
      node->val =  node->next->val;
       node->next = node->next->next;
    }
};
