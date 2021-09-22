#include <iostream>
using namespace std;

int main(){
    int x,y,z;
    cin>>x>>y>>z;
    for(int i = 1; i<z+1; i++){
        if(i%x==0){
            cout<<"Fizz";
        }
        if(i%y==0){
            cout<<"Buzz";
        }
        if(i%y!=0 && i%x!=0){
            cout<<i;
        }
        cout<<'\n';
    }
    return 0;
}