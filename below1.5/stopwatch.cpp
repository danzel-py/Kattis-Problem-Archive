#include <iostream>
using namespace std;

int main(){
    int x,mem;
    int sum = 0;
    bool press = false;
    cin>>x;

    for (int i = 0; i<x; i++){
        int sec;
        cin>>sec;
        press = !press;
        if(press == false){
            sum += sec-mem;
        }
        mem = sec;
    }
    if(x%2 == 1){
        cout<<"still running";
    }
    else{
        cout<<sum<<endl;
    }
    
    return 0;
}