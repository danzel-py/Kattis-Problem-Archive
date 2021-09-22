#include <iostream>
using namespace std;

int main(){
    int a,b,cr;
    cin>>a>>b>>cr;
    int c1,l1,c2,l2,c3,l3;
    cin>>c1>>l1>>c2>>l2>>c3>>l3;
    int ma = max(l1, max(l2,l3));
    int c;
    int pay = 0;
    for (int i = 0; i < ma; i++)
    {
        c = 0;
        if(i >= c1 && i<l1){
            c++;
        }
        if (i>=c2 && i<l2)
        {
            c++;
        }
        if( i >= c3 && i < l3){
            c++;
        }
        if(c == 1){
            pay += a;
        }else if(c == 2){
            pay += b * 2;
        }
        else if (c==3)
        {
            pay += cr*3;
        }
        
        
    }
    cout<<pay;
    return 0;
}