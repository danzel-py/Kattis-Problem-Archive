#include <iostream>
#include <queue>
#include <map>
#include <algorithm>
using namespace std;

int main(){
    int x,n;
    while(true){
        cin>>x;
        if(x<1){
            break;
        }
        priority_queue  <int, vector <int>, greater <int> > pq;
        map <int,int> map1;
        int arr[x];
        int res[x];
        for (int i = 0; i < x; i++)
        {
            cin>>n;
            arr[i]=n;
            pq.push(n);
        }
        for (int i = 0; i < x; i++)
        {
            cin>>n;
            res[i]=n;
        }
        sort(res, res+x);

        for (int i = 0; i < x; i++)
        {
            map1[pq.top()]=i;
            pq.pop();
        }
        for (int i = 0; i < x; i++)
        {
            cout<<res[map1[arr[i]]]<<'\n';
        }
        cout<<'\n';
        
        
        
        

    }
    return 0;
}