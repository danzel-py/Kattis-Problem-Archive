#include <map>
#include <iostream>
#include <vector>
using namespace std;

int main(){
    map<char,vector<char>> dict;
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