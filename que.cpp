#include<iostream>
using namespace std;

class Student
{
    public:
    int rn;  
    static int s;
    Student()
    {
        rn=++s;
    }
};
int Student::s;
main()
{
    Student A,b;
    cout<<A.rn<<endl<<b.rn;
}
