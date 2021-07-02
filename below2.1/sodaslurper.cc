#include <iostream>
using namespace std;

int main(){
    int p,f,c;
    cin>>p>>f>>c;
    p+=f;
    int count = 0;
    while(p>=c){
        p-=c-1;
        count++;
    }
    cout<<count;
    return 0;
}