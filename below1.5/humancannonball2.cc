#include <iostream>
#include <cmath>
using namespace std;

int main(){
    int n;
    cin>>n;
    string arr[n];
    double v,t,x,h1,h2;
    double res;
    for (int i = 0; i < n; i++)
    {
        cin>>v>>t>>x>>h1>>h2;
        res = x*tan(t*M_PI/180)-9.81/2*pow(x/v/cos(t*M_PI/180),2);
        if(res>=h1+1 && res<=h2-1){
            arr[i] = "Safe";
        }
        else{
            arr[i] = "Not Safe";
        }
    }

    for(int i = 0; i<n;i++){
        cout<<arr[i]<<'\n';
    }
    
    return 0;
}