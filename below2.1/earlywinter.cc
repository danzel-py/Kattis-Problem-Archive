#include <iostream>
using namespace std;

int main(){
    int n,dm;
    cin>>n>>dm;
    int dmi;
    int snow = -1;
    for (int i = 0; i < n; i++)
    {
        cin>>dmi;
        if(dmi<=dm && snow ==-1){
            snow = i;
        }
    }
    if(snow == -1){
        cout<<"It had never snowed this early!";
    }else{
        cout<<"It hadn't snowed this early in "<<snow<<" years!";
    }
    
    return 0;
}