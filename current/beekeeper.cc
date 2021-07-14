#include <iostream>
using namespace std;

int main(){
    int n;
    while (true)
    {
        cin>>n;
        if(n == 0){
            break;
        }
        string st;
        if(n == 1){
            cin>>st;
            cout<<st<<'\n';
            continue;
        }
        int maxv = 0;
        string bes = "GAADa";
        for (int i = 0; i < n; i++)
        {
            cin>>st;
            if(i == 0){
                bes = st;
            }
            if(st.length() == 1){
                continue;
            }
            int tempv = 0;
            for (int j = 1; j < st.length(); j++)
            {
                if(
                    st[j] == 'a'
                    ||st[j] == 'i'
                    ||st[j] == 'u'
                    ||st[j] == 'e'
                    ||st[j] == 'o'
                    ||st[j] == 'y'
                ){
                    if(st[j-1] == st[j]){
                        tempv++;
                        j++;
                    }
                }
            }
            if(tempv > maxv){
                bes = st;
                maxv = tempv;
            }
            

            
        }
        cout<<bes<<'\n';
        
    }
    
    return 0;
}