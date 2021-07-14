#include <iomanip>
#include <vector>
#include <iostream>
using namespace std;

vector<double> v(10001);
vector<int> c(10001);

double fun(int n){
    if(n==0){
        return 3;
    }
    if(v[n] > 1){
        return v[n];
    }
    v[n] = fun(n-1)*3.0/2.0;
    if(v[n] > 10){
        v[n]/=10.0;
        c[n] = c[n-1] + 1;
    }else{
        c[n] = c[n-1];
    }
    return v[n];
}

int main(){
    int n;
    c[0] = 1;
    int kes = 1;
    while (cin>>n)
    {
        fun(n);
        cout<<"Case ";
        cout<<kes;
        kes++;
        cout<<": ";
        cout<<c[n]<<'\n';
    }
    
    return 0;
}