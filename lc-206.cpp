/*************************************************************************
	> File Name: lc-206.cpp
	> Author: 
	> Mail: 
	> Created Time: 2020年02月25日 星期二 21时24分33秒
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
    ListNode* reverseList(ListNode* head) {
        if(head == NULL){
            return head;
        }
        ListNode  *next_node , *currunt_node;
        currunt_node  = head->next;
        head->next = NULL;
        while(currunt_node !=NULL){
            next_node  = currunt_node->next;
            currunt_node->next = head;
            head = currunt_node;
            currunt_node = next_node;
        }
        return head;
    }
};
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */


struct ListNode* reverseList(struct ListNode* head){
    struct ListNode  ret, *p, *q;
    if(head == NULL)return head;
    ret.next  = NULL;//虚拟头节点
    p = head;
    //head = NULL;
    while(p){
         q = p->next;
         p->next = ret.next;
         ret.next = p;
         p = q;//头插
    }
    return ret.next;
}
