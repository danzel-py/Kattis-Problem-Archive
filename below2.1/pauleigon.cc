#include <iostream>
using namespace std;

int main(){
    int n;
    int a,b;
    cin>>n>>a>>b;
    if(((a+b)/n)%2==0){
        cout<<"paul";
    }
    else{
        cout<<"opponent";
    }
    return 0;
}