#include <iostream>
using namespace std;

int main(){
    int m,n,u,l,r,d;
    cin>>m>>n>>u>>l>>r>>d;
    string str[m];
    int pos = 0;
    for (int kwkwkw = 0; kwkwkw < m; kwkwkw++)
    {
        cin>>str[kwkwkw];
    }
    for (int i = 0; i < m+u+d; i++)
    {
        for (int j = 0; j < l+r+n; j++)
        {
            if(i > u-1 && i < u+m && j>l-1 && j<l+n ){
                cout<<str[pos];
                pos++;
                j+=n-1;
            }


            else{

            if((i+j) % 2 == 0){
                cout<<'#';
            }
            else{
                cout<<'.';
            }
            }
        }
        cout<<'\n';
        
    }
    
    
    return 0;
}