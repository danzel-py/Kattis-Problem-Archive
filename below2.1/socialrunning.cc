#include <iostream>
using namespace std;

// WA

int main(){
    int f;
    cin>>f;
    int arr[f+2];
    for (int i = 0; i < f; i++)
    {
        cin>>arr[i];
    }
    arr[f] = arr[0];
    arr[f+1] = arr[1]; 
    if(f == 2){
        cout<<min(arr[0],arr[1])*2;
        return 0;
    }
    int shst = 10000000;
    for (int i = 0; i < f; i++)
    {
        shst = min(shst, arr[i] + arr[i+2]);
    }
    cout<<shst;
    

    
    return 0;
}