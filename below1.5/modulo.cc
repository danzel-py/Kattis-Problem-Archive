#include <iostream>
#include <algorithm> // SORT
using namespace std;

int main(){
    int arr[10];
    int n;
    int j = 0;
    for(int i =0; i<10; i++){
        cin>>n;
        arr[i] = n%42;
    }
    sort(arr,arr+10);
    for(int i =1; i<10; i++){
        if(arr[i]==arr[i-1]){
            j++;
        }
    }
    for(int i =0; i<10; i++){
    }
    cout<<10-j;
    
    return 0;
}