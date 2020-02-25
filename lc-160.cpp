/*************************************************************************
	> File Name: lc-160.cpp
	> Author: 
	> Mail: 
	> Created Time: 2020年02月25日 星期二 21时18分28秒
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

 #define swap(a,b){
     __typedef temp,temp = 
 }
struct ListNode *getIntersectionNode(struct ListNode *headA, struct ListNode *headB) {
    /*int cntA = 0,cntB = 0;
    struct ListNode *p = headA,*q = headB;
    while(p) cntA++, p = p->next;
    while(q) cntB++, q = q->next;
    int m = cntA - cntB;
    p = headA,q = headB;
    if(m > 0){
        while(m--) p = p->next;//已经对齐
        while(p != q){
            p = p->next;
            q = q->next;
        }
    }else{
            while(m++) q = q->next;
            while(p != q){
                p = p->next;
                q = q->next;
            }
    }
    return p;*/

    struct ListNode *p = headA,*q = headB;
    while(p != q){
        p = p ? p->next : headB;
        q = q ? q->next : headA;
    }
    return p;
}
