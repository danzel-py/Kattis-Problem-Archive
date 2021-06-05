#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    int t,c;
    cin>>t>>c;
    bool solv;
    int cont = 0;
    string str;
    string foo;
    for (int i = 0; i < t; i++)
    {
        solv = true;
        for (int j = 0; j < c; j++)
        {
            cin>>str;
            foo = str;
            transform(foo.begin(),foo.end(),foo.begin(),::tolower);
            transform(str.begin(),str.begin()+1,str.begin(),::tolower);
            if(foo!=str){
                solv = false;
            }
            
            
        }
        if(solv){
            cont++;
        }
    }
    cout<<cont;
    
    return 0;
}