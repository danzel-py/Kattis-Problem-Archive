#include <map>
#include <iostream>
#include <vector>
using namespace std;

map<char,vector<char> > dict;
map<char, bool> vis;

bool solve(char start, char end){
    if(start == end){
        return true;
    }
    if(vis[start]){
        return false;
    }
    vis[start] = true;

    for(auto &b: dict[start]){
        if(solve(b,end)){
            return true;
        }
    }

    return false;
}

int main(){
    int dc, wc;
    cin>>dc>>wc;
    char cjar,cj;
    for (int i = 0; i < dc; i++)
    {
        cin>>cjar;
        cin>>cj;
        dict[cjar].push_back(cj);
    }
    string a,b;
    for (int i = 0; i < wc; i++)
    {
        cin>>a>>b;
        if(a.length() != b.length()){
            cout<<"no\n";
            continue;
        }
        bool feasible = true;
        for (int j = 0; j < a.length(); j++)
        {
            char target = b[j];
            char start = a[j];
            vis.clear();
            if(!solve(start,target)){
                feasible = false;
                break;
            }
        }

        if(feasible){
            cout<<"yes\n";
        }
        else{
            cout<<"no\n";
        }
        
        
        
    }
    
    
    return 0;
}