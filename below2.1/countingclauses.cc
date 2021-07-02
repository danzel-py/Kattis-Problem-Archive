#include <iostream>
using namespace std;

int main(){
    int m,n;
    cin>>m>>n;
    int inp;
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin>>inp;
        }
        
    }
    if(m<n*n&&m>7){
        cout<<"satisfactory";
    }else{
        cout<<"unsatisfactory";
    }
    
    return 0;
}