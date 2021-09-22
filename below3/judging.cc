#include <map>
#include <iostream>
using namespace std;

int main(){
    string s;
    int n;
    cin>>n;
    map<string,int> mapz;
    for (int i = 0; i < n; i++)
    {
        cin>>s;
        mapz[s] ++;
    }
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        cin>>s;
        if(mapz[s] > 0){
            mapz[s]--;
            sum++;
        }
    }
    cout<<sum;


    return 0;
}