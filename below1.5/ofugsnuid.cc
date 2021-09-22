#include <iostream>
using namespace std;

int main(){
    int n,num;
    cin>>n;
    int arr[n];
    for(int i = 0; i < n; i++){
        cin>>num;
        arr[i] = num;
    }
    for(int i = n-1; i>-1; i--){
        cout<<arr[i]<<'\n';
    }
}