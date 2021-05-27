#include <iostream>
#include <cmath>
using namespace std;

int main(){
    int n,w,h;
    int inpu = 0;
    string res;
    cin>>n>>w>>h;
    int arr [n];
    int maxlengthsq = pow(w,2)+pow(h,2);
    for(int i = 0; i<n; i++){
        cin>>inpu;
        arr[i] = inpu;
    }
    for(int i = 0; i<n; i++){
        if(pow(arr[i],2)<=maxlengthsq) res = "DA";
        else res = "NE";
        cout<<res<<"\n";
    }
    return 0;
}