#include <iostream>
#include <string>
#include <fstream>
using namespace std;
class Customer
{
public:
    string an, n;
    float bal;

    Customer()
    {
    }
    Customer(int a)
    {
        cout << "\nEnter the name of the customer: ";
        cin >> n;
        cout << "Enter the account number of the customer: ";
        cin >> an;
        cout << "Enter the balance of the customer: ";
        cin >> bal;
    }
    void disp()
    {
        cout << "\n\nName: " << n;
        cout << "\nAccount number: " << an;
        cout << fixed << "\nBalance: " << bal;
    }
};
main()
{
    int c;
    cout << "\n\n1)Insert Data of customer\n2)Display Data of all customers\n3)Search\n4)Exit\nEnter the choice:";
    cin >> c;
    if (c == 1)
    {
        Customer c(0);
        ofstream f;
        f.open("Customer.txt", ios::app);
        f.write((char *)&c, sizeof(c));
        f.close();
        main();
    }
    else if (c == 2)
    {
        Customer m;
        ifstream file2;
        file2.open("Customer.txt", ios::in);
        while (true)
        {
            file2.read((char *)&m, sizeof(m));
            if (!file2)
                break;
            m.disp();
        }
        file2.close();
        main();
    }
    else if (c == 3)
    {
        Customer m;
        ifstream file2;
        file2.open("Customer.txt", ios::in);
        string n;
        cout << "\nEnter the account number to be searched: ";
        cin >> n;
        while (true)
        {
            file2.read((char *)&m, sizeof(m));
            if (!file2)
            {
                cout << "\nNot found";
                break;
            }
            if (m.an == n)
            {
                m.disp();
                break;
            }
        }
        file2.close();
        main();
    }
    else
        exit(0);
}