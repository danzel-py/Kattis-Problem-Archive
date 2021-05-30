#include <iostream>
#include <algorithm>
using namespace std;
#include <vector>
#include <sstream>

int main(){
    string all;
    getline(cin,all);
    int n;
    cin>>n;
    string player[n];
    int status[n];
    fill(status, status+n, -1);
    vector<string> t1;
    vector<string> t2;
    for (int i = 0; i < n; i++)
    {
        cin>>player[i];
    }
    stringstream ss(all);
    int c = 0;
    string w;
    while(ss.rdbuf()->in_avail() != 0){
        ss>>w;
        c++;
    }
    int pos = -1;
    int cter = 0;
    int caught = 0;
    bool got1 = true;
    while(true){
        pos++;
        if(pos==n){
                pos = 0;
        }
        cter++;
        while(status[pos] == 1){
            pos++;
            if(pos==n){
                pos = 0;
            }
        }
        if(cter == c){
            status[pos] = 1;
            caught++;
            cter = 0;
            if(got1){
                t1.push_back(player[pos]);
            }
            else{
                t2.push_back(player[pos]);
            }
                got1 = !got1;
        }
        if(caught == n){
            break;
        }
    }
    cout<<t1.size()<<'\n';
    for(auto b:t1){
        cout<<b<<'\n';
    }
    cout<<t2.size()<<'\n';
    
    for(auto b:t2){
        cout<<b<<'\n';
    }
    return 0;
}