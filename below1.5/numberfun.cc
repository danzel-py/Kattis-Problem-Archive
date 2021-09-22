#include <iostream>
using namespace std;

int main(){
    int n,a,b,c;
    cin>>n;
    string possible;
    
    for (int i = 0; i < n; i++)
    {
        possible = "Impossible";
        cin>>a>>b>>c;
        if(a+b==c || a*b==c){
            possible = "Possible";
        }
        else if(b/a==c && b%a==0){
            possible = "Possible";
        }
        else if(a-b==c || b-a==c){
            possible = "Possible";
        }
        else if(a/b==c && a%b ==0){
            possible = "Possible";
        }
        cout<<possible<<'\n';
    }
    
    return 0;
}