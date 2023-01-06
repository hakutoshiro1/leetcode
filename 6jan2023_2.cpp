#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        if(!list1&&!list2)return list1;
        else if(!list1)return list2;
        else if(!list2)return list1;
        else
        {
            ListNode *p,*q,*r,*s,*t=list1;
            int c=0;
            p=list1;
            q=list2;
            while(p&&q)
            {
                if(p->val>=q->val)
                {
                    while(q&&p->val>=q->val)
                    {
                        s=q;
                        q=q->next;
                    }
                    r=p->next;
                    p->next=q;
                    s->next=p;
                    t=p;
                    p=r;    
                }
                else if(t!=p)
                {
                    r=p->next;
                    t->next=p;
                    t=p;
                    s=t;
                    p->next=q;
                    p=r;
                }
                else
                {
                    r=p->next;
                    p->next=q;
                    s=p;
                    list2=p;
                    p=r;
                }
            }
            if(!p&&q)return list2;
            if(p&&!q)
            {
                while(s->next)s=s->next;
                s->next=p;
                return list2;
            }
            
        }
        return list2;
    }
};