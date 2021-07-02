#include <algorithm>
#include <iostream>
#include <utility>
using namespace std;

bool fsort(pair<string,int> const &s1, pair<string,int> const &s2){
    return s1.first<s2.first;
}

int main(){
    int r,c;
    while (true)
    {
        cin>>r>>c;
        if(r == 0){
            break;
        }
        char bro[c][r];
        string str[c];
        for (int i = 0; i < r; i++)
        {
            for (int j = 0; j < c; j++)
            {
                cin>>bro[j][i];
            }
        }
        for (int i = 0; i < c; i++)
        {
                str[i] = bro[i];
                str[i] = str[i].substr(0,r);
        }
        pair<string,int> strlow[c];
        for (int i = 0; i < c; i++)
        {
            strlow[i].first = str[i];
            transform(strlow[i].first.begin(),strlow[i].first.end(),strlow[i].first.begin(),::tolower);
            strlow[i].second = i;
        }
        

        stable_sort(strlow, strlow+c, fsort);

        for (int i = 0; i < r; i++)
        {
            for (int j = 0; j < c; j++)
            {
                cout<<str[strlow[j].second][i];
            }
            cout<<'\n';    
        }
        cout<<'\n';
        
                
        
        
    }
    
    return 0;
}