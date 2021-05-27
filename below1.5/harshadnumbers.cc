#include <iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int harshad = 0;
    int num = n;
    int sum, dupe;
    while(harshad == 0){
        sum = 0;
        dupe = num;
        while(dupe!=0){
            sum+=dupe%10;
            dupe/=10;
        }
        if(num%sum==0){
            harshad=num;
        }
        if(num>1000000000){
            break;
        }
        num++;
    }
    cout<<harshad;
    return 0;
}