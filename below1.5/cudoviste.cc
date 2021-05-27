#include <iostream>
using namespace std;

int main(){
    int r,c;
    cin>>r>>c;
    string inp[r];
    int crashed;
    int c0=0,c1=0,c2=0,c3=0,c4=0;
    for (int i = 0; i < r; i++)
    {
        cin>>inp[i];
    }

    for (int j = 0; j < r-1; j++)
    {
        for (int k = 0; k < c-1; k++)
        {
            crashed = 0;
            if(inp[j][k]=='#'||inp[j][k+1]=='#'||inp[j+1][k]=='#'||inp[j+1][k+1]=='#'){
                crashed = -1;
            }
            else{
                if(inp[j][k]=='X'){
                    crashed += 1;
                }
                if(inp[j][k+1]=='X'){
                    crashed +=1;
                }
                if(inp[j+1][k]=='X'){
                    crashed += 1;
                }
                if(inp[j+1][k+1]=='X'){
                    crashed +=1;
                }
            }
            switch (crashed){
                case 0:
                    c0++;
                    break;
                case 1:
                    c1++;
                    break;
                case 2:
                    c2++;
                    break;
                case 3:
                    c3++;
                    break;
                case 4:
                    c4++;
                    break;
                default:
                    break;
            } 
        }
    }
    cout<<c0<<'\n'<<c1<<'\n'<<c2<<'\n'<<c3<<'\n'<<c4<<'\n';
    
    
    return 0;
}