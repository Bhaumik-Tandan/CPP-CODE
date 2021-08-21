#include "parking.h"
class stack 
{
    int t;//stores the top
    int a[6];//array to store the cars
    public:
    stack()
    {
        t=-1;
    }
    void push(int e)
    {
        a[++t]=e;
    }
    int pop()
    {
        if(t==-1)
        return -1;//denotes empty stack
        return a[t--];
    }
    int top()
    {
        if(t==-1)
        return -1;//denotes empty stack
        return a[t];
    }
};

class parking
{
    stack main,temp;
    int n;//gives the count of cars

    public:
    parking()
    {
        n=0;//initially there are No cars
    }

    void park(int cn)
    {
        if(n==6)
        {
            cout<<"\nParking full";
            return;
        }
        main.push(cn);
        cout<<endl<<cn<<" parked";
        n++;
    }

    void unpark(int cn)
    {
        if(n==0)
        {
            cout<<"\nParking Empty";
            return;
        }
        int f=0;//defines if car is in the parking or not
        while(main.top()!=-1)
        {
            int n=main.pop();
            if(n==cn)
            {
                f=1;
                break;
            }
            temp.push(n);
        }
        while(temp.top()!=-1)
        main.push(temp.pop());
        if(f==1){
        cout<<endl<<cn<<" removed from the parking";
        n--;
        }
        else
        cout<<"\nCar not found";
    }

    void disp()
    {
        if(n==0)
        {
            cout<<"\nParking is empty";
            return;
        }
        cout<<"\nThe current order in the parking is: ";
        for(int i=0;i<n;i++)
        {
            cout<<main.top()<<" ";
            temp.push(main.pop());
        }
        for(int i=0;i<n;i++)
            main.push(temp.pop());
    }
    void menu()
    {
        cout<<"\n\nWhat operation do you want to perform\n";
        cout<<"1)Park\n2)Unpark\n3)Display\n4)Exit\nEnter your choice: ";
        int c;
        cin>>c;
        if(c==1)
        {
            cout<<"\nEnter the car number you want to park: ";
            int cn;
            cin>>cn;
            park(cn);
        }
        else if(c==2)
        {
            cout<<"\nEnter the car number you want to unpark: ";
            int cn;
            cin>>cn;
            unpark(cn);
        }
        else if(c==3)
            disp();
        else
        return;
        return menu();
    }
};