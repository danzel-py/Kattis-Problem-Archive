#include <iostream>
using namespace std;

int main(){
    int n;
    string mem;
    char mem1;
    cin>>n;
    string str;
    cin.ignore(1001,'\n');
    for (int i = 0; i < n; i++)
    {
        getline(cin,str);
        cout<<"Case #"<<i+1<<": ";
        for (int j = 0; j < str.length(); j++)
        {
            switch (int(str[j]))
            {
            case 97:
                mem = "2";
                break;
            case 98:
                mem = "22";
                break;
            case 99:
                mem = "222";
                break;
            case 100:
                mem = "3";
                break;
            case 101:
                mem = "33";
                break;
            case 102:
                mem = "333";
                break;
            case 103:
                mem = "4";
                break;
            case 104:
                mem = "44";
                break;
            case 105:
                mem = "444";
                break;
            case 106: 
                mem = "5";
                break;
            case 107:
                mem = "55";
                break;
            case 108:
                mem = "555";
                break;
            case 109:
                mem = "6";
                break;
            case 110:
                mem = "66";
                break;
            case 111:
                mem = "666";
                break;
            case 112:
                mem = "7";
                break;
            case 113:
                mem = "77";
                break;
            case 114:
                mem = "777";
                break;
            case 115:
                mem = "7777";
                break;
            case 116:
                mem = "8";
                break;
            case 117:
                mem = "88";
                break;
            case 118:
                mem = "888";
                break;
            case 119:
                mem = "9";
                break;
            case 120:
                mem = "99";
                break;
            case 121:
                mem = "999";
                break;
            case 122:
                mem = "9999";
                break;
            case 32:
                mem = "0";
                break;
            
            default:
                break;
            }
            if(j!=0){
                if(mem1 == mem[0]){
                    cout<<' ';
                }
            }
            cout<<mem;
            mem1 = mem[0];
            
        }
        cout<<'\n';
        
    }
    
    return 0;
}