#include <algorithm>
#include <iostream>
using namespace std;

int main(){
    int real,found;
    cin>>real>>found;
    int arr[found];
    for (int i = 0; i < found; i++)
    {
        cin>>arr[i];
    }
    sort(arr, arr+found);
    int c= 0;
    int pos =0;
    for (int i = 0; i < real; i++)
    {
        if(i == arr[pos]){
            c++;
        }
        else{
            cout<<i<<'\n';
        }
        while(i == arr[pos] && pos!=found-1){
            pos++;
        }
    }
    printf("Mario got %d of the dangerous obstacles.",c);
    
    
    return 0;
}