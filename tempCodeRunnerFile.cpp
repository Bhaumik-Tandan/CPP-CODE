#include <iostream>
using namespace std;
class Points
{
    float x, y;

public:
    void r()
    {
        cin >> x >> y;
    }
    void p()
    {
        cout
            << x << " " << y << endl;
    }
    void m(int xm, int ym)
    {
        x += xm;
        y += ym;
    }
} o[10];
main()
{
    float xm, ym;
    for (int i = 0; i < 10; i++)
        o[i].r();
    cin >> xm >> ym;
    for (int i = 0; i < 10; i++)
        o[i].m(xm, ym);
    for (int i = 0; i < 10; i++)
        o[i].p();
    return 0;
}