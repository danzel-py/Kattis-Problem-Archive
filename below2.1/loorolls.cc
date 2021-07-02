#include <iostream>
using namespace std;

int main(){
    long long l,n;
    cin>>l>>n;
    int count = 0;
    while(true){
        long long a = l%n;
        count++;
        if(a == 0){
            break;
        }

        n -= a;
    }
    cout<<count;
    return 0;
}