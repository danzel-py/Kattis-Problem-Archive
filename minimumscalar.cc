#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    int tc;
    cin>>tc;
    long long big;
    for (int i = 0; i < tc; i++)
    {
        cin>>big;
        long long arr1[big];
        long long arr2[big];
        for (int j = 0; j < big; j++)
        {
            cin>>arr1[j];
        }
        for (int j = 0; j < big; j++)
        {
            cin>>arr2[j];
        }
        sort(arr1,arr1+big);
        sort(arr2,arr2+big,greater<long long>());

        long long sum = 0;
        for (int j = 0; j < big; j++)
        {
            sum += arr1[j] * arr2[j];
        }
        cout<<"Case #"<<i+1<<": "<<sum<<'\n';
        


        
        
    }
    
    return 0;
}