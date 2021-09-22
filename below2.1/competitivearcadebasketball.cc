#include <iostream>
#include <vector>
#include <map>
using namespace std;

int main(){
    int n,p,m;
    cin>>n>>p>>m;
    string name;
    int score;
    int max = 0;
    bool found = false;
    map<string,int> getscore;
    vector<string> winner;
    for (int i = 0; i < n; i++)
    {
        cin>>name;
    }
    for (int j = 0; j < m; j++)
    {
        cin>>name>>score;
        getscore[name] += score;
        if(getscore[name] >= p){
            winner.push_back(name);
            found = true;
        }
    }
    if(!found){
        cout<<"No winner!";
    }else{
        for(auto const i:winner){
            cout<<i<<" wins!\n";
        }
    }
    
    
    return 0;
}