#include <iostream>
using namespace std;

int main(){
    int tc;
    cin>>tc;
    for (int wiwi = 0; wiwi < tc; wiwi++)
    {
        int type,stick;
        cin>>type>>stick;
        int prize[type];
        int req[type][stick];
        int inven[stick];
        
        int need;
        for (int i = 0; i < type; i++)
        {
            cin>>need;
            for (int j = 0; j < stick; j++)
            {
                req[i][j] = 0;
            }
            for (int j = 0; j < need; j++)
            {
                cin>>req[i][j];
            }
            
            cin>>prize[i];
        }

         for (int i = 0; i < stick; i++)
        {
            cin>>inven[i];
        }
        
        int sum = 0;
        for (int i = 0; i < type; i++)
        {
            int mininv = 10000000;
            for (int j = 0; j < stick; j++)
            {
                if(req[i][j] != 0){

                 mininv = min(mininv, inven[req[i][j]-1]);
                }
            }
            sum+=mininv*prize[i];
        }
         cout<<sum<<'\n'; 
        
        
        

    }
    
    return 0;
}