#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    string mine;
    int ln;
    cin>>ln;
    cin>>mine;
    int fren;
    cin>>fren;
    string frens[fren];
    int rsc = 0;
    for (int i = 0; i < fren; i++)
    {
        cin>>frens[i];
        for (int j = 0; j < ln; j++)
        {
            if(mine[j] == 'R'){
                if(frens[i][j] == 'R'){
                    rsc++;
                }
                else if (frens[i][j] == 'P')
                {
                }
                else{
                    rsc++;
                    rsc++;
                } 
            }
            else if(mine[j] == 'P'){
                if(frens[i][j] == 'R'){
                    rsc++;
                    rsc++;
                }
                else if (frens[i][j] == 'P')
                {
                    rsc++;
                }
                else{
                } 
            }
            else if(mine[j] == 'S'){
                if(frens[i][j] == 'R'){
                }
                else if (frens[i][j] == 'P')
                {
                    rsc++;
                    rsc++;
                }
                else{
                    rsc++;
                } 
            }
        }  
    }
    cout<<rsc<<'\n';
    int arz[3];
    rsc = 0;
    for (int i = 0; i < ln; i++)
    {
        arz[0] = 0;
        arz[1] = 0;
        arz[2] = 0;
        for (int j = 0; j < fren; j++)
        {
            if(frens[j][i] == 'P'){
                arz[0]++;
            }
            else if (frens[j][i] == 'R')
            {
                arz[1]++;
            }
            else{
                arz[2]++;
            }
        }
        rsc += max(arz[0] + arz[1]*2, max (arz[1] + arz[2]*2,  arz[2] + arz[0]*2));

    }
    cout<<rsc;
    


        
    return 0;
}