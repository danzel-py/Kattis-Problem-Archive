#include <iostream>
#include <vector>
#include <utility>
using namespace std;

int main(){
    int sy;
    cin>>sy;
    int cx,cy,r,x1,x2,y1,y2;
    vector < pair <pair<int,int> , pair<int,int> > > sq;
    vector < pair <pair<int , int> , int > > cc;
    string typ;
    for (int i = 0; i < sy; i++)
    {
        cin>>typ;
        if(typ == "circle"){
            cin>>cx>>cy>>r;
            cc.push_back(make_pair(make_pair(cx,cy),r));
        }else{
            cin>>x1>>y1>>x2>>y2;
            sq.push_back(make_pair(make_pair(x1,y1),make_pair(x2,y2)));
        }
    }
    int x,y;
    int n;
    int c;
    cin>>n;
    for (int k = 0; k < n; k++)
    {
        c = 0;
        cin>>x>>y;
        for (int l = 0; l < sq.size(); l++)
        {
            if(x>=sq[l].first.first
                &&x<=sq[l].second.first
                &&y>=sq[l].first.second
                &&y<=sq[l].second.second
            ){
                c++;
            }
        }
        for (int p = 0; p < cc.size(); p++)
        {
            if(x*x + y*y - 2*(x*cc[p].first.first + y*cc[p].first.second) + cc[p].first.first*cc[p].first.first + cc[p].first.second*cc[p].first.second <= cc[p].second*cc[p].second){
                c++;
            }
        }
        cout<<c<<'\n';
        
        
        

    }
    
    
    return 0;
}