/*************************************************************************
	> File Name: lc-83.cpp
	> Author: 
	> Mail: 
	> Created Time: 2020年02月25日 星期二 21时19分17秒
 ************************************************************************/

#include<iostream>
#include<cstdio>
using namespace std;
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */


struct ListNode* deleteDuplicates(struct ListNode* head){
    struct ListNode *p = head, *q;
    while(p && p->next){
        if(p->val - p->next->val){
            p = p->next;
        }else{
            q = p->next;
            p->next = p->next->next;
            free(q);
        }
    }
    return head;
}
