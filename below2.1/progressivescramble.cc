#include <iostream>
using namespace std;

int main(){
    int tc;
    cin>>tc;
    string str, msg;
    cin.ignore(100,'\n');
    for (int k = 0; k < tc; k++)
    {
        getline(cin,str);
        msg = str.substr(2);
        if(str[0] == 'e'){
            int ln = msg.length();
            int sum = 0;
            for (int i = 0; i < ln; i++)
            {
                if(msg[i] == ' '){
                    sum += 0;
                }else{
                    sum += int(msg[i]) - int('a') + 1;
                }
                sum = sum%27;
                if(sum == 0){
                    cout<<' ';
                }else{
                    cout<<char(sum + int('a') -1) ;
                }
            }
            cout<<'\n';
                
        }else if (str[0] == 'd')
        {
            cout<<msg[0];
            int ln = msg.length();
            int dif = 0;
            int now;
            int mem;
            for (int i = 1; i < ln; i++)
            {
                if(msg[i] == ' '){
                    now = 0;
                }else{
                    now = int(msg[i] - int('a') + 1);
                }
                if(msg[i-1] == ' '){
                    mem = 0;
                }else{
                    mem = int(msg[i-1] - int('a') + 1);
                }
                dif = now - mem;
                if(dif < 0) dif += 27;
                if(dif == 0){
                    cout<<' '; 
                }else{
                    cout<<char(dif + int('a') - 1);
                }



                
            }
            cout<<'\n';
            
        }
        
        
    }
    
    return 0;
}