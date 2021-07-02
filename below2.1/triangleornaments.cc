#include <iostream>
#include <cmath>
using namespace std;

int main(){
    int tris;
    cin>>tris;
    double a,b,c;
    double x1,x2,y1,y2;
    double angel;
    double centerx,centery;
    double rangel;
    double len;
    double sums=0;
    for (int i = 0; i < tris; i++)
    {
        cin>>a>>b>>c;
        x1 = c;
        y1 = 0;
        angel = acos((a*a+c*c-b*b)/(2.0*a*c)) * 180.0 / M_PI;
        y2 = sin(angel * M_PI / 180.0)*a;
        x2 = cos(angel * M_PI / 180.0)*a;
        centerx = (x1+x2)/3.0;
        centery = (y1+y2)/3.0;
        rangel = atan((x2-centerx)/(y2-centery)) * 180.0/M_PI;
        len = cos(rangel * M_PI / 180.0) *c;
        sums += len;



    }
    cout<<sums;
    
    return 0;
}