#include <iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    if(n%2==0){
        cout<<"Alice\n"<<n/2;
    }else{
        cout<<"Bob";
    }
    return 0;
}