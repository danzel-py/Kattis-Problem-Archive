#include <iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    string str;
    cin>>str;
    int a=0,b=0,g=0;
    for (int i = 0; i < str.length(); i++)
    {
        if(int(str[i])-65==i%3){
            a++;
        }
        if(i%2==0){
            if(int(str[i])-65==1){
                b++;
            }
        }
        else{
            if(i%4-1 == int(str[i])-65){
                b++;
            }
        }
        if(i%6<2){
            if(str[i]=='C'){
                g++;
            }
        }
        else if(i%6<4){
            if(str[i]=='A'){
                g++;
            }
        }
        else{
            if(str[i]=='B'){
                g++;
            }
        }
    }
    if(a>b&&a>g){
        cout<<a<<'\n'<<"Adrian";
    }
    else if (b>a&&b>g)
    {
        cout<<b<<'\n'<<"Bruno";
    }
    else if (g>a&&g>b)
    {
        cout<<g<<'\n'<<"Goran";
    }
    else if (g>b)
    {
        cout<<g<<'\n'<<"Adrian"<<'\n'<<"Goran";
    }
    else if (g>a)
    {
        cout<<g<<'\n'<<"Bruno"<<'\n'<<"Goran";
    }
    else if (a>g)
    {
        cout<<a<<'\n'<<"Adrian"<<'\n'<<"Bruno";
    }
    else{
        cout<<g<<'\n'<<"Adrian"<<'\n'<<"Bruno"<<'\n'<<"Goran";
    }
    
    
    
    
    
    
}