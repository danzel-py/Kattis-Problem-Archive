#include <iostream>
using namespace std;

int main(){
    long long int n;
    int d;
    long long int g = 1;
    int ct = -1;
    cin>>n>>d;
    while (n>0)
    {
        ct++;
        n/=2;
    }
    if(ct<=d){
        cout<<"yes";
    }
    else{
        cout<<"no";
    }

    return 0;
}