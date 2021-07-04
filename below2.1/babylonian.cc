#include <iostream>
#include <cmath>
using namespace std;

int main(){
    int tc;
    cin>>tc;
    cin.ignore(255,'\n');
    string str;
    for (int i = 0; i < tc; i++)
    {
        int power = 0;
        getline(cin,str);
        long long sum = 0;
        int pos = 0;
        for (int j = str.length()-1; j >= 0; j--)
        {
            if(str[j] == ','){
                if(pos !=0){
                    if(j!=str.length()-1){
                        if(str[j+1] != ' '){
                            sum+= pow(60,power) * stoi(str.substr(j+1,pos));
                        }
                    }
                }
                pos = 0;
                power++;
            }
            else{
                pos++;
            }
        }
         if(str[0]!=',') sum+= pow(60,power) * stoi(str.substr(0,pos));
         cout<<sum<<'\n';
        
    }
    
    return 0;
}