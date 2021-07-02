#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    int n;
    cin>>n;
    int x;
    string str;
    for (int i = 0; i < n; i++)
    {
        vector<int> reds;
        vector<int> blues;
        int sum = 0;
        cin>>x;
        for (int j = 0; j < x; j++)
        {
            cin>>str;
            if(str[str.length()-1] == 'B'){
                str.erase(str.length()-1,1);
                blues.push_back(stoi(str));
            }else if (str[str.length()-1] == 'R')
            {
                str.erase(str.length()-1,1);
                reds.push_back(stoi(str));
            }
        }
        if(reds.empty() || blues.empty()){
            cout<<"Case #"<<i+1<<": 0\n";
            continue;
        }
        sort(reds.begin(),reds.end());
        sort(blues.begin(), blues.end());
        while (!reds.empty() && !blues.empty())
        {
            sum += reds.back() + blues.back() - 2;
            reds.pop_back();
            blues.pop_back();
        }
        cout<<"Case #"<<i+1<<": "<<sum<<'\n';

        


        
    }
    
    return 0;
}