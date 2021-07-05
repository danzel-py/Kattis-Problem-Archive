#include <iostream>
using namespace std;

int main(){
    int a,b;
    scanf("%d/%d", &a, &b);


    while(a%2 == 0 && b%2==0){
        a/=2;
        b/=2;
    }

    for (int i = 3; i <= b; i++)
    {
        if(a%i==0 && b%i==0){
            a/=i;
            b/=i;
            i--;
        }
    }
    
    

    a -= 32*b;

    if(a == 0){
        cout<<"0/1";
        return 0;
    }

    if(b%5==0){
        b/=5;
    }else{
        a*=5;
    }

    if(a%9 == 0){
        a/=9;
    }else if(a%3 == 0){
        a/=3;
        b*=3;
    }else{
        b*=9;
    }

    cout<<a<<'/'<<b;

    return 0;
}