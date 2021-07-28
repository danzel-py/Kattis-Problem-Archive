#include <iostream>
using namespace std;

bool dividable(int n){
    int a = 1;
    while (true)
    {
        a++;
        int r = a*a;
        if(n%r == 0){
            return true;
        }else if (a*a > n)
        {
            return false;
        }
    }
    
}

int main(){
    int n;
    cin>>n;
    int m = 1;
    while (true)
    {
        m++;
        int res = m*n;
        if(!dividable(res)){
            break;
        }
    }
    cout<<m;
    return 0;
}