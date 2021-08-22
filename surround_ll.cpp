#include<iostream>
using namespace std;

struct  ListNode
{
    int data;
    struct ListNode* next;     
}*h;
void surround(struct ListNode *front,int a,int b)
{
    if(front==0)//in case list is empty
    return;
    struct ListNode *p=front->next,*prev=front;
    while(p)
    {
        int d=p->data;
        if(d==a)
        {
            struct ListNode *t=new struct ListNode;
            t->data=b;
            t->next=p;
            prev->next=t;
            t=new struct ListNode;
            t->data=b;
            t->next=p->next;
            p->next=t;
            p=t->next;
            continue;
        }
        prev=p;
        p=p->next;
    }    
}
main()
{
    struct ListNode *t;
    t=new struct ListNode;
    t->data=3;
    struct ListNode *p;
    p=new struct ListNode;
    p->data=4;
    t->next=p;
    p->next=0;
    h=new struct ListNode;
    h->next=p;
    // surround(h,4,5);
    cout<<h->next->data<<h->next->next->data<<h->next->next->next->data;
}