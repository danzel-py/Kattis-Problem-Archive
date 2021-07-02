#include <iostream>
using namespace std;

int main(){
    string a,b;
    cin>>a>>b;
    while (a.length() < b.length())
    {
        a = "0" + a;
    }
    while (a.length() > b.length())
    {
        b = "0" + b;
    }
    string ares,bres;
    for (int i = 0; i < a.length(); i++)
    {
        if(a[i] > b[i]){
            ares+=a[i];
        }
        else if (a[i] < b[i])
        {
            bres+=b[i];
        }else{
            ares+=a[i];
            bres+=a[i];
        }
    }
    if(ares.length() == 0){
        cout<<"YODA";
    }else{
        cout<<stoi(ares);
    }
    cout<<'\n';
    if(bres.length() == 0){
        cout<<"YODA";
    }
    else{
        cout<<stoi(bres);
    }
    
    
    
    return 0;
}