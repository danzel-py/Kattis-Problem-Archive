#include <iostream>
using namespace std;

int main(){
    int tc;
    cin>>tc;
    for (int i = 0; i < tc; i++)
    {
        int x,y;
        cin>>x>>y;
        char cjar;
        string res = "";
        string str[x];
        for (int j = 0; j < x; j++)
        {
            cin>>str[j];
        }

        for (int k = 0; k < y; k++)
        {
            int cone = 0;
            for (int j = 0; j < x; j++)
            {
                if(str[j][k] == '1'){
                    cone++;
                }
            }
            if(cone>=x-cone){
                res+="1";
            }
            else{
                res+="0";
            }
            
        }
        cout<<res<<"\n";
        
        
        
    }
    
    return 0;
}