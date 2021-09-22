#include <iostream>
using namespace std;

int main(){
    int n,wo,wi,price;
    cin>>n;
    string arr[n];
    for(int i=0; i<n; i++){
        cin>>wo>>wi>>price;
        if(wi-price<wo){
            arr[i] = "do not advertise";
        }
        else if(wi-price>wo){
            arr[i] = "advertise";
        }
        else{
            arr[i] = "does not matter";
        }
    }
    for(int i=0; i<n; i++){
        cout<<arr[i]<<"\n";
    }
    return 0;
}