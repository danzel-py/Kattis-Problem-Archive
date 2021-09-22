#include <iostream>
using namespace std;

int main(){
    string wow;
    cin>>wow;
    int w = 0;
    int b = 0;
    for (int i = 0; i < wow.length(); i++)
    {
        if(wow[i] == 'W'){
            w++;
        }
        else if (wow[i] == 'B')
        {
            b++;
        }
        
    }
    if(w==b){
        cout<<1;
    }else cout<<0;
    
    return 0;
}