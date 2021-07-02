#include <iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    if(n%2==0){
        if(n%4 == 0){
            cout<<"Even";
        }
        else cout<<"Odd";
    }
    else{cout<<"Either";}
    return 0;
}