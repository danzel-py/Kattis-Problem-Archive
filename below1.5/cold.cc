#include <iostream>
using namespace std;

int main(){
    int n,x,j;
    j = 0;
    cin>>n;
    for(int i=0; i<n; i++){
        cin>>x;
        if(x<0){
            j++;
        }
    }
    cout<<j;
    return 0;
}