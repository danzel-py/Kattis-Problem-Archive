#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    int inp[4];
    for (int i = 0; i < 4; i++)
    {
        cin>>inp[i];
    }
    sort(inp,inp+4);

    cout<<inp[0]*inp[2];
    
    return 0;
}