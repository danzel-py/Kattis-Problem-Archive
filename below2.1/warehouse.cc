#include <iostream>
#include <map>
#include <vector>
#include <utility>
#include <algorithm>
using namespace std;

bool vsort(const pair<int,string> &p1, const pair<int,string> &p2){
    if(p1.first == p2.first){
        return p1.second < p2.second;
    }
    return p1>p2;

}

int main(){
    map <string, int> toycount;
    vector <pair< int, string> > vek;
    int tc,num,n;
    string name;
    cin>>tc;
    for (int i = 0; i < tc; i++)
    {
        cin>>n;
        for (int j = 0; j < n; j++)
        {
            cin>>name>>num;
            toycount[name] += num;
        }
        for(auto const [key,value]:toycount){
            vek.push_back(make_pair(value,key));
        }
        sort(vek.begin(),vek.end(),vsort);
        cout<<vek.size()<<'\n';
        for(auto b:vek){
            cout<<b.second<<' '<<b.first<<'\n';
        }
        toycount.clear();
        vek.clear();
    }
    
    return 0;
}