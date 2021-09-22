#include <iostream>
#include <map>
#include <queue>
using namespace std;

int main(){
    int n,num;
    priority_queue <int, vector<int> , greater<int> > pq;
    map <int, string> map1;
    string first,second,str;
    cin>>n;
    for (int i = 0; i < n; i++)
    {
        cin>>first>>second;
        if(int(first[0])<60){
            num = stoi(first)/2;
            str = second;
        }else{
            num = stoi(second);
            str = first;
        }
        map1[num] = str;
        pq.push(num);
    }
    for (int i = 0; i < n; i++)
    {
        cout<<map1[pq.top()]<<'\n';
        pq.pop();
    }
    
    
    return 0;
}