#include <map>
#include <iostream>
#include <set>
using namespace std;

// EPIC FAIL

int main(){
    int p,q,k;
    cin>>p>>q>>k;
    string str[p];
    map<char,int> getcolor;
    set<int> myset;
    for (int i = 0; i < p; i++)
    {
        cin>>str[i];
    }
    bool found = false;
    int col;
    for (int j = 0; j < q; j++)
    {
        col++;
        for (int i = 0; i < p; i++)
        {
            if(found){
                if(getcolor[str[i][j]] != 0 && getcolor[str[i][j]] < col){
                    col = getcolor[str[i][j]];
                    i = -1;
                }
                else{
                    getcolor[str[i][j]] = col;
                }
            }else{
                if(getcolor[str[i][j]] != 0 ){
                    col = getcolor[str[i][j]];
                    found = true;
                    i = -1;
                }
                else{
                    getcolor[str[i][j]] = col;
                }
            }
        }
        found = false;
        
    }
    int ma =0;
    for (int i = 0; i < p; i++)
    {
        for (int j = 0; j < q; j++)
        {
            myset.insert(getcolor[str[i][j]]);
        }
        
    }
    cout<<myset.size();
    
    
    
    
    
    return 0;
}