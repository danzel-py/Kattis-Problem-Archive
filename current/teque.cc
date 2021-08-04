#include <deque>
#include <iostream>
using namespace std;

int main(){

    // semi FAST IO
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    deque<int> fr;
    deque<int> ba;
    int tc;
    cin>>tc;
    string st;
    int n;
    while (tc--)
    {
        cin>>st>>n;
        if(st == "get"){
            if(n >= fr.size()){
                cout<<ba[n-fr.size()]<<'\n';
            }else{
                cout<<fr[n]<<'\n';
            }
            continue;
        }
        if(st == "push_back"){
            ba.push_back(n);
        }else if (st == "push_front")
        {
            fr.push_front(n);
        }else{
            while(ba.size() < fr.size()){
                ba.push_front(fr.back());
                fr.pop_back();
            }
            while (ba.size() > fr.size())
            {
                fr.push_back(ba.front());
                ba.pop_front();
            }
            fr.push_back(n);
            
        }
        
    }
    
    return 0;
}