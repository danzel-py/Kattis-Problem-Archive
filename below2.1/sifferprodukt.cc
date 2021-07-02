#include <iostream>
using namespace std;

int main(){
    int n,mem,produkt;
    cin >> n;
    while (true)
    {   
        produkt = 1;
        while(true){
            mem = n%10;
            if(mem!=0){produkt *= mem;}       
            n /=10;
            if(n==0){
                break;
            }
        }
        n = produkt;
        if(n<10){
            break;
        }
    }
    cout<<n;
    
    return 0;
}