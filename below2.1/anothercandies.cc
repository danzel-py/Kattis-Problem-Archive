#include <iostream>
using namespace std;

int main(){
    long long n;
    cin>>n;
    string dum;
    int m;
    long long x;
    for (int p = 0; p < n; p++)
    {
        long long sum = 0;
        getline(cin,dum);
        cin>>m;
        for (int q = 0; q < m; q++)
        {
            cin>>x;
            sum+= x;
            sum %= m;
        }
        if(sum == 0){
            cout<<"YES";
        }else{
            cout<<"NO";
        }
        cout<<'\n';
        

        
    }
    
    
    return 0;
}