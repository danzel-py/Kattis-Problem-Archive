#include <iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int x[n];
    for(int i = 0; i<n; i++){
        cin>>x[i];
    }
    for(int i = 0; i<n; i++){
        cout<<x[i];
        if(x[i]<0) x[i] *= -1;
        if(x[i]%2 == 1){
            cout<<" is odd\n";
        }
        else{
            cout<<" is even\n";
        }
    }
    return 0;
}