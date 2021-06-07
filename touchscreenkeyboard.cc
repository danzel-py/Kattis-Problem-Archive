#include <iostream>
#include <utility>
#include <map>
#include <cmath>
#include <algorithm>
#include <vector>
using namespace std;

int main(){
    int tc;
    cin>>tc;
    string mainstr;
    int cause;
    map<char, pair<int,int> > getloc;
    string cpos[3] = {"qwertyuiop","asdfghjkl","zxcvbnm"};
    for (int ii = 0; ii < 3; ii++)
    {
        for (int jj = 0; jj < cpos[ii].length(); jj++)
        {
            getloc[cpos[ii][jj]] = make_pair(ii, jj);
        }
        
    }
    vector<pair<int,string> > vek;
    
    string strinp;
    for (int bro = 0; bro < tc; bro++)
    {
        vek.clear();
        cin>>mainstr>>cause;
        for (int brow = 0; brow < cause; brow++)
        {
            cin>>strinp;
            int sum = 0;
            for (int i = 0; i < mainstr.length(); i++)
            {
                sum += abs(getloc[mainstr[i]].first - getloc[strinp[i]].first) + abs(getloc[mainstr[i]].second - getloc[strinp[i]].second);
            }
            vek.push_back(make_pair(sum,strinp));
            
            
            
        }
        sort(vek.begin(),vek.end());
        for(auto br:vek){
            cout<<br.second<<' '<<br.first<<'\n';   
        }
        
    }
    
    
    return 0;
}