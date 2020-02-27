/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int  val;
 *     struct ListNode *next;
 * };
 */

/*
bool isPalindrome(struct ListNode* head){
    int headd = 0, tail = 0;
    int arr[100]  ={0};
    while(head != NULL && tail < 100){
        arr[tail] = head->val;
        tail ++;
    }
    while (headd != tail){
        if(arr[headd] !=arr[tail]) return 0;
        headd++;
        tail--;
    }
    return 1;
}
*/

int get_length(struct ListNode *head){
    int n  = 0;
    while(head) n+= 1,head = head->next;
    return n;
}

struct ListNode * reverse(struct ListNode *head,int n){
    struct ListNode ret , *p = head, *q;
    while(n--) p = p->next;//到后半段；
    ret.next = NULL;
    while(p){
        q = p->next;
        p->next = ret.next;
        ret.next = p;
        p = q;
    }
    return ret.next;
}

bool  isPalindrome(struct ListNode *head){
    int len  = get_length(head);
    struct ListNode *p = head, *q = reverse(head,(len + 1) / 2);//把后半段反转
    while(q){
        if(p->val - q->val)return false;//对比前半段与反转后的后半段
        p = p->next;
        q = q->next;
    }
    return true;
}
