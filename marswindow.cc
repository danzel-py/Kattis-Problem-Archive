#include <iostream>
using namespace std;

int main(){
    int x;
    cin>>x;
    int year = 2018;
    int month = 4;
    while (true)
    {
        if(year > x){
            cout<<"no";
            break;
        }
        else if (year == x)
        {
            cout<<"yes";
            break;
        }
        year+=2;
        month+=2;
        if(month>12){
            month = 2;
            year++;
        }
        
    }
    
    return 0;
}