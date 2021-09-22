#include <map>
#include <iostream>
#include <sstream>
#include <vector>
#include <algorithm>
using namespace std;

map<int,int> col;
vector<int> forbid;
int main(){
    int n;
    cin>>n;
    cin.ignore(255,'\n');
    string s;
    col[0] =1 ;
    for (int i = 0; i < n; i++)
    {
        if(col[i] == 0){
            col[i] = 1;
        }
        getline(cin,s);
        string tmp;
        int node;
        stringstream ss(s);
        int sum = 0;
        forbid.clear();
        while (!ss.eof())
        {
            
            int colcan = 1;
            ss>>tmp;
            node = stoi(tmp);
            forbid.push_back(node);
            if(col[node] == 0){
                // ! NOT OPTIMAL
                col[node] = 1;
            }
            if(col[node] == col[i]){
                if(node > i){
                    col[node]++;
                }else{
                    col[i] = 0;
                }
            }
        }
        if(col[i] == 0){
            sort(forbid.begin(),forbid.end());
            for (int p = 0; p < forbid.size(); p++)
            {
                if(forbid[p] != p+1){
                    col[i] = p+1;
                    break;
                }
            }
        }
        for (int pp = 0; pp < n; pp++)
        {
            cout<<pp<<". "<<col[pp]<<'\n';
        }
        cout<<i<<" -----------\n";
        
    
    }
    cout<<"FINAL: \n";
    for(auto [key,val]:col){
        cout<<key<<". "<<val<<'\n';
    }


    // int maxxx = 0;
    // for(auto [key,value]:col){
    //     maxxx = max(maxxx, value);
    // }
    // cout<<maxxx<<'\n';
    return 0;
}