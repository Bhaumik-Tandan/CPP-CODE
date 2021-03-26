#include <iostream>
using namespace std;

class Vehicle
{
    protected:
    int regno;
    public:
    Vehicle()
    {
        cout<<"\nVehicle created";
        cout<<"\nEnter the registration number: ";
        cin>>regno;
    }
    ~Vehicle()
    {
        cout<<"\nVehicle having  "<<regno<<" destroyed";
    }

};
class Two_Wheeled:protected Vehicle
{
    protected:
    int modn;
    public:
    Two_Wheeled()
    {
        cout<<"\nTwo_Wheeled created";
        cout<<"\nEnter the model number: ";
        cin>>modn;
    }
    ~Two_Wheeled()
    {
        cout<<"\nTwo_Wheeled  "<<modn<<" destroyed";
    }

};

class Three_Wheeled:protected Vehicle
{
    protected:
    int pn;
    public:
    Three_Wheeled()
    {
        cout<<"\nThree_Wheeled created";
        cout<<"\nEnter the plate number: ";
        cin>>pn;
    }
    ~Three_Wheeled()
    {
        cout<<"\nThree_Wheeled "<<pn<<" destroyed";
    }
};

class Four_Wheeled:protected Vehicle
{
    protected:
    int cn;
    public:
    Four_Wheeled()
    {
        cout<<"\nFour_Wheeled created";
        cout<<"\nEnter the Chassis number: ";
        cin>>cn;
    }
    ~Four_Wheeled()
    {
        cout<<"\nFour_Wheeled "<<cn<<" destroyed";
    }
};

class Motor_cycle:Two_Wheeled
{
    int gn;
    public:
    Motor_cycle()
    {
        cout<<"\nMotor_cycle created";
        cout<<"\nEnter the gear number: ";
        cin>>gn;
    }
    ~Motor_cycle()
    {
        cout<<"\nMotor_cycle " <<gn<<" destroyed";
    }
};


class Scoter:Two_Wheeled
{
    int cn;
    public:
    Scoter()
    {
        cout<<"\nScoter created";
        cout<<"\nEnter the clutch number: ";
        cin>>cn;
    }
    ~Scoter()
    {
        cout<<"\nScoter  " <<cn<<" destroyed";
    }
};

class Passenger_vehicle:Three_Wheeled
{
    int n;
    public:
    Passenger_vehicle()
    {
        cout<<"\nPassenger_vehicle created";
        cout<<"\nEnter the passenger limit: ";
        cin>>n;
    }
    ~Passenger_vehicle()
    {
        cout<<"\nPassenger_vehicle having passenger limit "<<n<<" destroyed";
    }
};

class Goods_vehicle:Three_Wheeled
{
    float w;
    public:
    Goods_vehicle()
    {
        cout<<"\nGood's_vehicl created";
        cout<<"\nEnter the weight limit: ";
        cin>>w;
    }
    ~Goods_vehicle()
    {
        cout<<"\nGood's_vehicle having weight limit "<<w<<" destroyed";
    }
};

class Car:Four_Wheeled
{
    char a[50];
    public:
    Car()
    {
        cout<<"\nCar created";
        cout<<"\nEnter the body color: ";
        cin>>a;
    }
    ~Car()
    {
        cout<<"\nCar destroyed";
    }
};

class Bus:Four_Wheeled
{
    int n;
    public:
    Bus()
    {
        cout<<"\nBus created";
        cout<<"\nEnter the number of travellers:";
        cin>>n;
    }
    ~Bus()
    {
        cout<<"\nBus destroyed";
    }
};

class Truck:Four_Wheeled
{
    float wl;
    public:
    Truck()
    {
        cout<<"\nTruck created";
        cout<<"\nEnter the weight load:";
        cin>>wl;
    }
    ~Truck()
    {
        cout<<"\nTruck destroyed";
    }
};

main()
{    
int c;
    cout<<"Enter your choice:\n1)Motorcycle";
    cout<<"\n2)Scotter\n3)Passenger\n4)Goods's";
    cout<<"\n5)Car\n6)Bus\n7)Truck\n";
    cin>>c;
    if(c==1)
        Motor_cycle m;
    else if(c==2)
        Scoter s;
    else if(c==3)
        Passenger_vehicle p;
    else if(c==4)
        Goods_vehicle g;
    else if(c==5)
        Car c;
    else if(c==6)
        Bus b;
    else if(c==7)
        Truck t;
    else 
        cout<<"Wrong Choice";
} 
