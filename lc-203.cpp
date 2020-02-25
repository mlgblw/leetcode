/*************************************************************************
	> File Name: lc-203.cpp
	> Author: 
	> Mail: 
	> Created Time: 2020年02月25日 星期二 21时25分49秒
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
    ListNode* removeElements(ListNode* head, int val) {
        //ListNode *currunt_node = new ListNode   (0);
        ListNode *first = new ListNode   (0);
        //currunt_node= head-> next  ;
        first->next = head;
        if(head->val == val) head =  head->next;
        while(head!= NULL ){
            if( first -> next!=NULL && first->next-> val == val ){
                first->next = first->next->next;
            }
            else head = head -> next;
        }
        return head;
    }
};
