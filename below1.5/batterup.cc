#include <iostream>
using namespace std;

int main(){
    int n,test;
    double counter,sum;
    cin>>n;
    counter = 0;
    sum = 0;
    for(int i= 0; i<n; i++){
        cin>>test;
        if(test!=-1){
            counter++;
            sum+=test;
        }
    }
    cout<<sum/counter;
    return 0;
}