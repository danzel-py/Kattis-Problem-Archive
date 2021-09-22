#include <iostream>
using namespace std;

int main(){
    string str;
    cin>>str;
    int a = str.length()/2;
    string dum = str;
    dum.erase(a);
    str.erase(0,a);
    int sum1 = 0;
    int sum2 = 0;
    for(int i = 0; i<a; i++){
        sum1 += int(dum[i]);
        sum2 += int(str[i]);
    }
    sum1-=65*a;
    sum2-=65*a;
    int increment;
    for (int i = 0; i < a; i++)
    {
        increment = 0;
        while(sum1+int(dum[i])+increment>90){
            increment -= 26;
        }
        while(sum1+int(dum[i])+increment<65){
            increment += 26;
        }
        dum[i] = char(int(dum[i])+sum1+increment);
        increment = 0;
        while(sum2+int(str[i])+increment>90){
            increment -= 26;
        }
        while(sum2+int(str[i])+increment<65){
            increment += 26;
        }
        str[i] = char(int(str[i])+sum2+increment); 

    }
    for(int i = 0; i<a;i++){
        increment = 0;
        while(int(str[i])+int(dum[i])+increment-65>90){
            increment-=26;
        }
        while(int(str[i])+int(dum[i])+increment-65<65){
            increment-=26;
        }
        dum[i] = char(int(str[i])+int(dum[i])+increment-65);
    }
    cout<<dum<<endl;
    
    return 0;
}