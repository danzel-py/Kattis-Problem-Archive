#include <iostream>
using namespace std;

int main(){
    int w, windim, radim;
    cin>>w>> windim>> radim;
    string str[w];
    for (int i = 0; i < w; i++)
    {
        cin>>str[i];
    }
    int c;
    int maxc = 0;
    int x,y;
    for (int i = 0; i <= w - radim; i++)
    {
        for (int j = 0; j <= windim - radim; j++)
        {
            c = 0;
            for (int k = i+1; k < radim-1+i; k++)
            {
                for (int l = j+1; l < radim-1+j; l++)
                {
                    if(str[k][l] == '*'){
                        c++;
                    }
                }
                
            }
            
            if(c>maxc){
                maxc = c;
                x = i;
                y = j;

            }
            
        }
        
    }
    cout<<maxc<<'\n';
    for (int i = x; i < x + radim; i++)
    {
        for (int j = y; j < y + radim; j++)
        {
            if((i == x && y == j) || (i == x && j == y+radim-1) || (i == x + radim-1 && j == y) || (i == x+radim-1 && j==y+radim-1)){
                str[i][j] = '+';
            }else if (i == x || i == x+radim-1)
            {
                str[i][j] = '-';
            }else if (j == y || j == y+radim-1)
            {
                str[i][j] = '|';
            }
            
            
        }
        
    }

    for (int i = 0; i < w; i++)
    {
        cout<<str[i]<<'\n';
    }
    
    
    
    
    return 0;
}