#include <iostream>
#include <vector>
using namespace std;

int main(){
    int tc;
    cin>>tc;
     
    for (int i = 0; i < tc; i++)
    {
        int tnum;
        cin>>tnum;
        int n;
        cin>>n;
        vector<int> v;
        v.reserve(80);
        int ct = 1;
        int pos = 0;
        int len = 1;
        v.push_back(1);
        while (ct < n)
        {
            pos = 0;
            if(v[0] == 0){
                v[0] = 1;
                ct++;
                continue;
            }
            while(v[pos] != 0 && pos !=len){
                v[pos]--;
                pos++;
            }
            if(pos == len){
                v.push_back(0);
                len++;
            }
            v[pos] = pos+1;
            ct++;
        }
        cout<<tnum<<' '<<v.size()<<'\n';
        int bro = 0;
        for(auto &b:v){
            cout<<b<<' ';
            bro++;
            if(bro % 10 == 0){
                cout<<'\n';
            }
        }
        cout<<'\n';
        


    }
    
    return 0;
}