#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main()
{
    int tc;
    double x1, x2, x3, y1, y2, y3;
    cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;
    // y = mx + c;
    double m1 = (y1 - y2) / (x1 - x2);
    double c1 = y1 - m1 * x1;
    double m2 = (y2 - y3) / (x2 - x3);
    double c2 = y2 - m2 * x2;
    double m3 = (y3 - y1) / (x3 - x1);
    double c3 = y3 - m3 * x3;
    bool l1, l2, l3;
    double area = abs(x1*(y2-y3) + x2*(y3-y1) + x3*(y1-y2))/2;
    l1 = l2 = l3 = false;
    if (y3 < m1 * x3 + c1)
    {
        l1 = true;
    }
    if (y1 < m2 * x1 + c2)
    {
        l2 = true;
    }
    if (y2 < m3 * x2 + c3)
    {
        l3 = true;
    }

    bool p1, p2, p3;

    double x, y;
    int ct = 0;
    cin>>tc;
    for (int i = 0; i < tc; i++)
    {
        p1 = p2 = p3 = false;
        cin >> x >> y;
        if (abs(y - (m1 * x + c1)) < 1e-6)
        {
            p1 = l1;
        }
        else if (y < m1 * x + c1)
        {
            p1 = true;
        }
        
        if (abs(y - (m2 * x + c2)) < 1e-6)
        {
            p2 = l2;
        }
        else if (y < m2 * x + c2)
        {
            p2 = true;
        }
        if (abs(y - (m3 * x + c3)) < 1e-6)
        {
            p3 = l3;
        }
        else if (y < m3 * x + c3)
        {
            p3 = true;
        }

        if(p1 == l1 && p2 == l2 && p3==l3){
            ct++;
        }
    }
    cout<<fixed<<setprecision(1)<<area<<'\n'<<ct;
    return 0;
}