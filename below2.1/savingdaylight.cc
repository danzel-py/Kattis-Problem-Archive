#include <iostream>
using namespace std;

int main(){
    string mon,date,sunrise,sunset,year;
    int hour2,min2,hour1,min1;
    int inda,inb;
    int hour,min;
    while(cin>>mon){
        cin>>date>>year>>sunrise>>sunset;
        for (int i = 0; i < sunrise.size(); i++)
        {
            if(sunrise[i] == ':'){
                inda = i;
            }
        }
        for (int i = 0; i < sunset.size(); i++)
        {
            if(sunset[i] == ':'){
                inb = i;
            }
        }
        if(inda !=2){
            // one digit
            hour1 = stoi(sunrise.substr(0,1));
            min1 = stoi(sunrise.substr(2,2));
        }else{
            hour1 = stoi(sunrise.substr(0,2));
            min1 = stoi(sunrise.substr(3,2));
        }
        if(inb !=2){
            // one digit
            hour2 = stoi(sunset.substr(0,1));
            min2 = stoi(sunset.substr(2,2));
        }else{
            hour2 = stoi(sunset.substr(0,2));
            min2 = stoi(sunset.substr(3,2));
        }
        
        hour = hour2 - hour1;
        min = min2- min1;
        if(min<0){
            hour--;
            min+=60;
        }
        cout<<mon<<' '<<date<<' '<<year<<' '<<hour<<" hours "<<min<<" minutes\n";
    }
    return 0;
}