#include <iostream>
using namespace std;

int main(){
    int a,b,x,d;
    cin>>a;
    cin>>b;
    cin>>x;
    int sum = 0;
    int max = 0;
    int min = 10001;
    for(int i = a; i<b+1; i++){
        d = i;
        sum = 0;
        while(d!=0){
            sum += d%10;
            d /=10;
        }
        if(sum==x){
            if(i>max){
                max = i;
            }
            if(i<min){
                min = i;
            }
        }


    
    }
    cout<<min<<endl;
    cout<<max<<endl;
    return 0;
}