#include <iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    char x;
    char y = ' ';
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        cin>>x;
        if(y==x){
            count++;
        }
        y=x;
    }
    cout<<count;
    
    return 0;
}