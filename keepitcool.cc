#include <algorithm>
#include <iostream>
#include <vector>
#include <utility>
using namespace std;

int main(){
    int n,m,s,d;
    cin>>n>>m>>s>>d;
    pair<int,int> av[s];
    vector<int> purasu;
    purasu.reserve(s);
    int sum = 0;
    for (int i = 0; i < s; i++)
    {
        cin>>av[i].first;
        av[i].second = i;
        sum+=av[i].first;
    }
    if(sum < m){
        cout<<"impossible";
        return 0;
    }

    sort(av, av+s);
    sum = 0;
    int tariru = -1;
    for (int i = s-1; i > -1; i--)
    {
        sum+= av[i].first;
        if(sum >= m){
            tariru = i;
            break;
        }
    }
    for (int i = 0; i < tariru; i++)
    {
        if(n- d+av[i].first >= 0){
            n-= d-av[i].first;
            purasu[av[i].second] = d-av[i].first;
        }
        else{
            purasu[av[i].second] = n;
            n-=n;
            break;
        }
    }
    if(n > 0){
        cout<<"impossible";
        return 0;
    }

    for (int i = 0; i < s; i++)
    {
        cout<<purasu[i]<<' ';
    }
    
    
    


    
    return 0;
}