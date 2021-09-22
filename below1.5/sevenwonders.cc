#include <iostream>
using namespace std;

int main(){
    string inp;
    cin>>inp;
    int t=0;
    int c=0;
    int g=0;
    int sum=0;
    for (int i = 0; i < inp.length(); i++){
        if(inp[i]=='G'){
            g++;
        }
        if(inp[i]=='T'){
            t++;
        }
        if(inp[i]=='C'){
            c++;
        }
    }
    sum+=g*g+c*c+t*t;
    while(t!=0 && c!=0 && g!=0){
        sum+=7;
        t--;
        c--;
        g--;
    }
    cout<<sum;
    
    return 0;
}