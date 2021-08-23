#include<iostream>
using namespace std;
class List
{
    struct node
    {
        string name;
        struct node *next;
    };
    struct node *h;
    public:
    List()
    {
        h=new node;
        h->next=0;
    }
    void ins(string name)
    {
        struct node *t=new node;
        t->name=name;
        t->next=0;
        struct node *p=h;
        while(p->next)
        p=p->next;
        p->next=t;
    }  

    bool del(string name)
    {
        if(!(h->next))
            return false;
        struct node *t=h->next;
        struct node *p=h;
        
        while(t)
           if(t->name==name)
            {
                p->next=t->next;
                return true;
            }
            else
            {
                p=t;
                t=t->next;
            }
        return false;
    }  
    bool search(string name)
    {
        if(!(h->next))
            return false;
        struct node *t=h->next;
        
        while(t)
           if(t->name==name)
                return true;
            else
                t=t->next;
        return false;
    }  

    void print()
    {
        struct node *t=h->next;
        if(!t)
        cout<<"\nNo reservation";
        while(t)
           {
               cout<<"\n"<<t->name;
               t=t->next;
           }
    }  
};

class Flight
{
    string flight_no;
    int maximum_number_of_seats,number_of_passengers;
    List list_of_passengers;
    public:
    Flight()
    {
        maximum_number_of_seats=25;
        number_of_passengers=0;
    }

    bool reserveSeat(string n)
    {
        if(maximum_number_of_seats==number_of_passengers)
        return false;
        number_of_passengers++;
        list_of_passengers.ins(n);
        return true;
    }
    bool cancelReservation(string n)
    {
        bool a=list_of_passengers.del(n);
        if(a==1)
        number_of_passengers--;
        else 
        return 0;
        return 1;
    }
    bool search(string n)
    {
        return list_of_passengers.search(n);
    }
    void printPassengers()
    {
        cout<<"\nPassenger list";
        list_of_passengers.print();
    }
}f;

void menu()
{
        cout<<"\n\n1)Reserve a ticket\n2)Cancel a reservation\n";
        cout<<"3)Check whether a ticket is reserved for a particular person";
        cout<<"\n4)Display the passengers\n5)Exit\n";
        cout<<"Enter your choice: ";
        int c;
        cin>>c;
        string s;
        switch(c)
        {
            case 1:
            cout<<"Enter the name: ";
            getline(cin,s);
            getline(cin,s);
            if(f.reserveSeat(s))
                cout<<"Ticket Booked for "<<s;
            else
            cout<<"Flight full";
            break;
            case 2:
            cout<<"Enter the name: ";
            getline(cin,s);
            getline(cin,s);
            if(f.cancelReservation(s)==0)
                cout<<s<<" not in the list";
            else
            cout<<"Cancelled";
            break;
            case 3:
            cout<<"Enter the name: ";
            getline(cin,s);
            getline(cin,s);
            if(f.search(s)==0)
                cout<<s<<" not in the list";
            else
            cout<<"You are reserved";
            break;
            case 4:
            f.printPassengers();
            break;
            default:
            return;
        }
        return menu();
}

main()
{
    menu();
}