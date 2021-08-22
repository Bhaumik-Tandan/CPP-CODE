#include<iostream>
using namespace std;

struct  ListNode
{
    int data;
    struct ListNode* next;     
}*h;
bool removeRange(struct ListNode *front,int min,int max)
{
    if(max<min)
    throw 5;
    struct ListNode *p=h,*prev=h;
    bool f=false;
    while(p)
    {
        int d=p->data;
        if(d>=min&&d<=max)
        {
            struct ListNode *c=p->next;
            delete p;
            p=c;
            f=true;
            continue;
        }
        prev=p;
        p=p->next;
    }    
    return f;
}
main()
{
    h=new struct ListNode;
    
    h->data=32;
    struct ListNode *p;
    p=new struct ListNode;
    p->data=343;
    h->next=p;
    p->next=0;
    cout<<removeRange(h,300,700);
}