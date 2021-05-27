#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    int dis;
    int k,a,b;
    cin>>k>>dis;
    int inp;
    int arrA[1000] = {0};
    int arrB[1000] = {0};
    int tote = 0;

    for (int i = 0; i < k; i++)
    {
        cin>>inp>>a>>b;
        arrA[inp-1]+=a;
        arrB[inp-1]+=b;
        tote += a + b;
    }
    char winner;
    int wasted_a=0, wasted_b=0;
    int totes_a=0, totes_b=0;
    for (int i = 0; i < dis; i++)
    {
        if(arrA[i]>arrB[i]){
            winner = 'A';
            wasted_a = (arrA[i]+arrB[i])/2-arrB[i];
            wasted_b = arrB[i];
            if(wasted_a%2==0 && wasted_a!=0) wasted_a--;
        }
        else{
            winner = 'B';
            wasted_b = (arrB[i]+arrA[i])/2-arrA[i];
            wasted_a = arrA[i];
            if(wasted_b%2==0&& wasted_b!=0) wasted_b--;
        }
        cout<<winner<<' '<<wasted_a<<' '<<wasted_b<<'\n';
        totes_a += wasted_a;
        totes_b += wasted_b;
    }
    cout<<fixed<<setprecision(7)<<double(abs(totes_a-totes_b))/double(tote);
    
    
    return 0;
}