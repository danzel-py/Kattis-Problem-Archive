#include <iostream>
using namespace std;

int main(){
    int m,n,x;
    cin>>m>>n;
    string str;
    int c=0;
    int in = 0;
    for (int i = 0; i < n; i++)
    {
        cin>>str>>x;
        if(str=="enter"){
            if(in+x>m){
                c++;
            }
            else{
                in+=x;
            }
        }
        else if (str=="leave")
        {
            in -= x;
        }
    }
    cout<<c;
    
    return 0;
}