/*************************************************************************
	> File Name: LeetCode295.cpp
	> Author: 
	> Mail: 
	> Created Time: 2020年05月16日 星期六 18时29分08秒
 ************************************************************************/
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */

//小顶堆维护队列元素


class Solution {
public:
    //第几个链表
    typedef pair<int , ListNode * > PIL;
    //第一个纬度链表结点值，第二纬度链表结点地址
    typedef pair<int , PIL > PIP;
    set<PIP> s;
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        for(int i = 0; i <  lists.size(); i++){
            if(lists[i] == NULL) continue;
            s.insert(PIP(lists[i]->val, PIL(i,  lists[i])));
            lists[i] = lists[i]->next;
        }
        ListNode ret, *p = &ret;
        ret.next = NULL;
        while(s.size()) {
            PIP temp = *s.begin();
            s.erase(s.begin());
            p->next = temp.second.second;
            p = p->next;
            int i = temp.second.first;
            if(lists[i] == NULL) continue;
             s.insert(PIP(lists[i]->val, PIL(i, lists[i])));
            lists[i] = lists[i] ->next;
        }
        return ret.next;
    }
};
