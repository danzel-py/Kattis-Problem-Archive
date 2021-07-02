#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    string str;
    cin>>str;
    int p=13,k=13,h=13,t=13;
    bool dupe = false;
    int a = str.length()/3;
    string cart[a];
    
    for (int i = 0; i < a; i++)
    {
        cart[i]=str[3*i];
        cart[i]=cart[i]+str[3*i+1]+str[3*i+2];
    }
    


    sort(cart,cart+a);
    
    for (int i = 0; i < a-1; i++)
    {
        if(cart[i]==cart[i+1]){
            dupe = true;
            break;
        }
        else{
            switch (cart[i][0])
            {
            case 'P':
                p--;
                break;
            case 'K':
                k--;
                break;
            case 'H':
                h--;
                break;
            case 'T':
                t--;
                break;
            default:
                break;
            }
        }
        if(i==a-2){
            switch (cart[i+1][0])
            {
            case 'P':
                p--;
                break;
            case 'K':
                k--;
                break;
            case 'H':
                h--;
                break;
            case 'T':
                t--;
                break;
            default:
                break;
            }
        }
    }

    if(dupe == true){
        cout<<"GRESKA";
    }
    else{
        cout<<p<<' '<<k<<' '<<h<<' '<<t;
    }

    
    
    return 0;
}