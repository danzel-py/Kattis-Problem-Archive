#include <iostream>
#include <algorithm>
#include <set>
#include <tuple>
#include <map>
using namespace std;

int main(){
    int n;
    map< tuple< int, int, int, int, int>, int > mapz;
    cin>>n;
    int maxz = 0;
    int countp = 0;
        int arr[n][5];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            cin>>arr[i][j];
        }
        sort(arr[i],arr[i]+5);
        mapz[make_tuple(arr[i][0],arr[i][1],arr[i][2],arr[i][3],arr[i][4])]++;
        maxz = max(mapz[make_tuple(arr[i][0],arr[i][1],arr[i][2],arr[i][3],arr[i][4])], maxz);

        
    }
    for (int i = 0; i < n; i++)
    {
        if(mapz[make_tuple(arr[i][0],arr[i][1],arr[i][2],arr[i][3],arr[i][4])] == maxz){
            countp++;
        }
    }
    cout<<countp;
    
    
    
    return 0;
}