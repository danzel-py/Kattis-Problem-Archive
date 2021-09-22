#include <iostream>
using namespace std;

int main(){
    int n,x,res;
    cin>>n;
    int wow[n];
    for(int i=0; i<n; i++){
        cin>>x;

        res = 1;
        for(int j = 1; j<x+1; j++){
            res *= j;
            res %= 10;
        }
        wow[i] = res;
    }
    for(int i=0; i<n; i++){
        cout<<wow[i]<<"\n";
    }
    return 0;
}