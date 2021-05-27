#include <iostream>
#include <map>
#include <vector>
#include <algorithm>
#include <set>

using namespace std;

int main(){
    int n,m;
    cin>>n>>m;
    string bought;
    vector <string> list;
    map<string, int> getc;
    for (int i = 0; i < n; i++)
    {
        set <string> setz;
        for (int j = 0; j < m; j++)
        {
            cin>>bought;
            setz.insert(bought);


        }
        for(const auto k: setz){
            getc[k]++;
            if(getc[k]==n){
                list.push_back(k);
            }
        }
        
    }


    sort(list.begin(), list.end());
    cout<<list.size();
    for (int i = 0; i < list.size(); i++)
    {
        cout<<'\n'<<list[i];
    }
    
    
    return 0;
}