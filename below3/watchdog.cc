#include <map>
#include <iostream>
#include <vector>
using namespace std;

int main(){
    int tc,s,h,x,y;
    cin>>tc;
    for (int ll = 0; ll < tc; ll++)
    {
        cin>>s>>h;
        int xx[h];
        int yy[h];
        vector<vector<bool>> exi(s+1, vector<bool>(s+1,false));
        for (int i = 0; i < h; i++)
        {
            cin>>x>>y;
            xx[i] = x;
            yy[i] = y;
            exi[x][y] = true;
        }
        bool gg;
        int ansi = -1,ansj = -1;
        for (int i = 1; i < s+1; i++)
        {
            for (int j = 1; j < s+1; j++)
            {
                gg = true;
                if(exi[i][j]){
                    continue;
                }
                int lhor = min(i, s-i);
                int lver = min(j, s-j);
                int maxr = min(lhor,lver);

                for (int k = 0; k < h; k++)
                {
                    if((xx[k] - i) * (xx[k]-i) + (yy[k]-j)*(yy[k]-j) > maxr*maxr ){
                        gg = false;
                        break;
                    }
                }

                if(gg) {
                    ansi = i;
                    ansj = j;
                    break;
                }
            }
            if(gg) break;
        }

        if(ansi == -1 && ansj == -1){
            cout<<"poodle";
        }else{
            cout<<ansi<<' '<<ansj;
        }
        cout<<'\n';
        
        
    }
    
    return 0;
}