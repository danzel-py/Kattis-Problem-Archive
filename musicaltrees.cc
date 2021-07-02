#include <iostream>
#include <algorithm>
#include <map>
using namespace std;

map<int,int> mapz;

int main(){
    int n, t;
    cin>>n>>t;
    int ppl[n];
    int tree[t];
    for (int i = 0; i < n; i++)
    {
        cin>>ppl[i];
    }
    for (int i = 0; i < t; i++)
    {
        cin>>tree[i];
    }
    sort(ppl, ppl+n);
    sort(tree,tree+t);

    for (int i = 0; i < n; i++)
    {
        int distmin = 10000;
        int whichtree;
        for (int j = 0; j < t; j++)
        {
            if(ppl[i] < tree[j]){
                if(tree[j] - ppl[i] < distmin){
                    whichtree = j;
                }
                break;
            }
            if(ppl[i] - tree[j] < distmin){
                distmin = ppl[i]-tree[j];
                whichtree = j;
            }
        }
        mapz[tree[whichtree]]++;
        
    }
    int sum = 0;
    for(auto [key,val] : mapz){
        if(val > 1){
            sum += val-1;
        }
    }
    cout<<sum;
    
        

    
    return 0;
}