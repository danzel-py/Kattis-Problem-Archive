#include <iostream>
using namespace std;

int main(){
    int a,b;
    cin>>a>>b;
    int low = a>b? b:a;
    int high = a>b? a:b;
    for(int i = low+1; i<high+2; i++){
        cout<<i<<'\n';
    }
    return 0;
}