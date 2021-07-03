#include <iostream>
#include <map>
#include <vector>
#include <cmath>
using namespace std;

map<string,int> cor;
map<string,int> incor;
map<string,int> all;
map<string,int> wc;

int main(){
    int n;
map<string,string> tlmap;
    cin>>n;
    string st;
    string corrn;
    string arr[n];

    for (int i = 0; i < n; i++)
    {
        cin>>st;
        arr[i] = st;
        wc[st]++;
    }

    cin>>n;
    bool issing = true;
    string tl;
    for (int i = 0; i < n; i++)
    {
        cin>>st>>tl>>corrn;
        tlmap[st] = tl;
        if(corrn == "correct"){
            cor[st]++;
        }else{
            incor[st]++;
        }
        if(all[st] >0){
            issing = false;
        }
        all[st]++;
    }
    bool iscor = true;
    for (int i = 0; i < n; i++)
    {
        if(incor[arr[i]]>0){
            iscor = false;
        }
    }
    

    if(issing){
        for (int i = 0; i < n; i++)
        {
            cout<<tlmap[arr[i]]<<' ';
        }
        cout<<"\n";
        if(iscor){
            cout<<"correct";
        }
        else{
            cout<<"incorrect";
        }
        
    }else{
        bool allincor = false;
        int sumall = 1;
        int sumcor = 1;
        for(auto [key,val]:wc){
            if(val > 0){
                sumall *= pow(all[key],val);
                sumcor *= pow(cor[key],val);
            }
        }
        cout<<sumcor<<" correct \n"<<sumall-sumcor<<" incorrect";
    }
    
    
    return 0;
}