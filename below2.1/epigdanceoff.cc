#include <iostream>
using namespace std;

int main(){
    int p,q;
    cin>>p>>q;
    string str[p];
    for (int i = 0; i < p; i++)
    {
        cin>>str[i];
    }
    bool blankies;
    int count = 1;
    for (int j = 0; j < q; j++)
    {
        blankies = true;
        for (int i = 0; i < p; i++)
        {
            if(str[i][j] == '$'){
                blankies = false;
            }
        }
        if(blankies){
            count++;
        }
        
    }
    cout<<count;
    
    
    return 0;
}