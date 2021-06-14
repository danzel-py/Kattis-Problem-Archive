#include <vector>
#include <iostream>
#include <map>
using namespace std;

vector< vector < int > > v;
vector< vector <int > > vcateg;
vector<int> vr;
map<int,int> wantedcount;
vector<int > minused; 

int main(){
    int kidcount, toycount, catcount;
    cin>>kidcount>>toycount>>catcount;
    vector <int> dummy;
    int x;
    int childfav;
    for (int i = 0; i < kidcount; i++)
    {
        cin>>childfav;
        for (int j = 0; j < childfav; j++)
        {
            cin>>x;
            wantedcount[x]++;
            dummy.push_back(x);
        }
        v.push_back(dummy);
        dummy.clear();
    }

    int l,t,r;
    for (int i = 0; i < catcount; i++)
    {
        cin>>l;
        for (int j = 0; j < l; j++)
        {
            cin>>t;
            dummy.push_back(t);
        }
        cin>>r;
        vr.push_back(r);
        vcateg.push_back(dummy);
        dummy.clear();
    }

    // * input done;

    // v => each childs fav toy
    // vcateg => each categ toy counts
    // vr => each categ max toy to be played
    // wantedcount => this toy is wanted by ... kids
    // minused => 1d vect for min(wanted, available)

    for (int i = 0; i < catcount; i++)
    {
        for (int j = 0; j < vcateg[i].size(); j++)
        {
            minused.push_back(min(wantedcount[j],vcateg[i][j]));  
        }
        sort(minused.begin(),minused.end(),greater<int>());
        for (int i = 0; i < count; i++)
        {
            /* code */
        }
        
        
    }
    

    
    
    return 0;
}