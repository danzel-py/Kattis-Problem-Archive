#include <iostream>
using namespace std;

int main(){
    int g,s,c;
    cin>>g>>s>>c;
    int power = g*3+s*2+c*1;
    if(power>7){
        cout<<"Province or ";
    }
    else if (power>4)
    {
        cout<<"Duchy or ";
    }
    else if(power>1){
        cout<<"Estate or ";
    }
    if(power>5){
        cout<<"Gold\n";
    }
    else if (power>2)
    {
        cout<<"Silver\n";
    }
    else
    {
        cout<<"Copper\n";
    }
    
    
    
    return 0;
}