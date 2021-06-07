#include <iostream>
#include <string>
using namespace std;
class CSE1002Result;
class CourseDetails
{
    string course_name;
    int no_of_hours;
    string lecturer_name;
    string class_room;
    void setc()
    {
        cout << "\nEnter the name of the course: ";
        cin >> course_name;
    }
    void setn()
    {
        cout << "\nEnter the number of hours of the course: ";
        cin >> no_of_hours;
    }
    void setl()
    {

        cout << "\nEnter the lecturer name of the course: ";
        cin >> lecturer_name;
    }
    void setcr()
    {
        cout << "\nEnter the class room of the course: ";
        cin >> class_room;
    }

    string getc()
    {
        return course_name;
    }
    int getn()
    {
        return no_of_hours;
    }
    string getcr()
    {
        return class_room;
    }
    string getl()
    {
        return lecturer_name;
    }
    friend class CSE1002Result;
};
class TheoryMarks
{
    float CAT1, CAT2;
    void set1()
    {
        cout << "\nEnter the marks of CAT-1 (out of 50): ";
        cin >> CAT1;
    }
    void set2()
    {
        cout << "\nEnter the marks of CAT-2 (out of 50): ";
        cin >> CAT2;
    }
    float get1()
    {
        return CAT1;
    }
    float get2()
    {
        return CAT2;
    }
    friend class CSE1002Result;
};
class LabMarks
{
    float Ass1, Ass2, Ass3;
    void set1()
    {
        cout << "Enter the marks of Assigynment 1 (out of 30): ";
        cin >> Ass1;
    }
    void set2()
    {
        cout << "Enter the marks of Assigynment 2  (out of 30): ";
        cin >> Ass2;
    }
    void set3()
    {
        cout << "Enter the marks of Assigynment 3  (out of 40): ";
        cin >> Ass3;
    }
    float get1()
    {
        return Ass1;
    }
    float get2()
    {
        return Ass2;
    }
    float get3()
    {
        return Ass3;
    }
    friend class CSE1002Result;
};
class JComponentMarks
{
    float j;

    void set()
    {
        cout << "Enter the marks of J-COMPONENT (out of 100): ";
        cin >> j;
    }
    float get()
    {
        return j;
    }

    friend class CSE1002Result;
};
class CSE1002Result
{
    CourseDetails c;
    TheoryMarks t;
    LabMarks l;
    JComponentMarks j;

public:
    void processResult()
    {
        cout << "\n\nCouse Details";
        cout << "\nCourse name: " << c.getc();
        cout << "\nNumber of class: " << c.getn();
        cout << "\nLecturer name: " << c.getl();
        cout << "\nClass Room: " << c.getcr();
        cout << "\n\nTheory MARKS";
        cout << "\nCat-1 Marks: " << t.get1();
        cout << "\nCat-2 Marks: " << t.get2();
        cout << "\n\nLab MARKS";
        cout << "\nAss-1 Marks: " << l.get1();
        cout << "\nAss-2 Marks: " << l.get2();
        cout << "\nAss-3 Marks: " << l.get3();
        cout << "\n\nJ component MARKS: " << j.get();
        int tt = t.get1() + t.get1();
        int tl = l.get1() + l.get2() + l.get3();
        int tj = j.get();
        cout << "\n\nEnter the total credits of course: ";
        int t;
        cin >> t;
        cout << "\nEnter the credits of theory: ";
        int ct;
        cin >> ct;
        cout << "\nEnter the credits of lab: ";
        int cl;
        cin >> cl;
        cout << "\nEnter the credits of project: ";
        int cj;
        cin >> cj;
        int f = (tt * ct + tl * cl + tj * cj) / t;
        cout << "\n\nResult Marks = " << f;

        char g;
        if (f >= 90)
            g = 'S';
        else if (f >= 80)
            g = 'A';
        else if (f >= 70)
            g = 'B';
        else if (f >= 60)
            g = 'C';
        else if (f >= 50)
            g = 'D';
        else if (f >= 50)
            g = 'E';
        else
            g = 'F';
        cout << "\nResultant grade = " << g;
    }
    CSE1002Result()
    {
        c.setc();
        c.setn();
        c.setcr();
        c.setl();
        t.set1();
        t.set2();
        l.set1();
        l.set2();
        l.set3();
        j.set();
    }
};
main()
{
    CSE1002Result a;
    a.processResult();
}