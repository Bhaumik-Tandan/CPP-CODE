#include <iostream>
#include <cstring>
using namespace std;

class clinic;

class Patient
{
    string n, icno, a, c;
    public:
    Patient()
    {
        getline(cin,n);
        cout << "\nEnter Name: ";
        getline(cin,n);
        cout << "Enter Ic No: ";
        cin>>icno;
        cout << "Enter Allergy: ";
        cin>>a;
        cout << "Enter City: ";
        cin >> c;
    }
    friend clinic;//you can access private members from clinic
};

class Appointment
{
    string d,t,s;
    public:
    Appointment()
    {
        cout << "\nAppointment Date: ";
        cin >> d;
        cout << "Appointment Time: ";
        cin >> t;
        cout << "Sympthoms: ";//wrong spelling mentioned in diagram
        cin >> s;
    }
    friend clinic;//you can access private members from clinic    
};
class clinic
{
    Patient *p;
    Appointment *a;
    string s;
    int amount;
public:
    void rp()
    {
        cout << "\n\n\t\t\tDENTAL TREATMENT\n\t\tREGISTER PATIENT\n\n";
        p=new Patient;
        cout << "\nPatient successfully Registered";
    }

    void ma()
    {
        cout << "\n\n\t\t\tDENTAL TREATMENT\n\t\tMAKE APPOINTMENT\n\n";
        a=new Appointment;
        cout << "\nAppointment accepted\nsubject to Doctor's Approval";
    }
    void mp()
    {
        amount=0;
        cout << "\n\n\t\t\tDENTAL TREATMENT\n\t\tMAKE PAYMENT\n\n";
        cout<<"\nCleaning (RM 35): ";
        bool o;
        cin>>o;
        if(o==1)
        amount+=35;
        cout<<"Cavity Filling (RM 150): ";
        cin>>o;
        if(o==1)
        amount+=150;
        cout<<"X-Ray (RM 85): ";
        cin>>o;
        if(o==1)
        amount+=85;
        cout<<"Flouride (RM 50): ";
        cin>>o;
        if(o==1)
        amount+=50;
        cout<<"Root Canal (RM 500): ";
        cin>>o;
        if(o==1)
        amount+=500;
        cout << "\nTOTAL TREATMENT PAYMENT\n\nRMA"<<amount;

    }
    void db()
    {
        cout << "\n\n\t\t\tDENTAL TREATMENT\n\t\tDENTAL BILL\n\n";
        cout<<p->n<<" ("<<p->icno<<")\nTotal Bill RM "<<amount;
        cout<<"\nNext Appointment Approved ("<<a->d<<" "<<a->t<<")";
        cout<<"\nTreatment for "<<a->s;
    }
    void menu()
    {
        // system("clear");//depends upon console
        cout << "\n\n\t\t\tDENTAL TREATMENT\n\t\t\t\tWelcome " << s;
        cout << "\n\n1.Register Patient\n2.Make Appointment\n3.Make payment\n4.Display Bill\n5.Exit";
        cout << "\n\nEnter your choice: ";
        int c;
        cin >> c;
        // system("clear");//depends upon console
        if (c == 1)
            rp();
        else if (c == 2)
            ma();
        else if(c==3)
            mp();
        else if(c==4)
            db();
        else
        {
             cout << "\n\n\t\t\tDENTAL TREATMENT\n\n\nThankyou "<<s;
             return;
        }
        return menu();
    }
    void wel()
    {
        cout << "\n\n\t\t\tWelcome to Healthy Dental Clinic";
        cout << "\n\nStaff id: ";
        cin >> s;
        if (s != "N0001")
        {
            cout << "\nInvalid Staff iD.\nPlease try again!";
            return;
        }
        return menu();
    }
};

int main()
{
    clinic c;
    c.wel();
}