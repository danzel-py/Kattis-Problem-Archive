#include <iostream>
using namespace std;

int main(){
    int max = 0;
    int a1,a2,a3,a4,sum;
    int winner;
    for(int i=0;i<5;i++){
        cin>>a1>>a2>>a3>>a4;
        sum = a1+a2+a3+a4;
        if(sum>max){
            winner = i+1;
            max=sum;
        }
    }
    cout<<winner<<" "<<max;
    return 0;
}