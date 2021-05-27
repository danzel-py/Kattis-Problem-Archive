#include <iostream>
using namespace std;

int main(){
    int d,l;
    cin>>d>>l;

    int days = d;
    for(int m = 0; m<l; m++){if(m == 1 || m==3 || m==5 || m==7 || m==8 || m==10){
        days += 31;
    }
    else if (m == 4||m==6||m==9||m==11)
    {
        days += 30;
    }
    else if( m == 2){
        days += 28;
    }}

    switch (days%7)
    {
    case 1:
        cout<<"Thursday";
        break;
    case 2:
        cout<<"Friday";
        break;
    case 3:
        cout<<"Saturday";
        break;
    case 4:
        cout<<"Sunday";
        break;
    case 5:
        cout<<"Monday";
        break;
    case 6:
        cout<<"Tuesday";
        break;
    case 0:
        cout<<"Wednesday";
        break;
    default:
        break;
    }
    

    return 0;
}