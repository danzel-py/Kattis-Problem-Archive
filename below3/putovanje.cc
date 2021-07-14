#include <iostream>
#include <cmath>
using namespace std;

// He keeps eating the next fruit...
int main(){
    int n,c;
    cin>>n>>c;
    int arr[n];
    int sum =0;
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    int maxfruit =0 ;
    for (int i = 0; i < n; i++)
    {
        int ate = 0;
        int w = 0;
        for (int j = i; j < n; j++)
        {
            if(w+arr[j] <= c){
                w+=arr[j];
                ate++;
            }
        }
        maxfruit = max(maxfruit,ate);
    }
    cout<<maxfruit;
    
    
    return 0;
}