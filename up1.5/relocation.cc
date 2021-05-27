#include <iostream>
using namespace std;

int main(){
    int n,q;
    cin>>n>>q;
    int arr[n];
    for(int i = 0 ; i<n; i++){
        cin>>arr[i];
    }
    int req,a,b;
    for (int j = 0; j < q; j++)
    {
        cin>>req>>a>>b;
        if(req==1){
            arr[a-1] = b;
        }
        else if (req==2)
        {
            arr[a-1]>arr[b-1]?cout<<arr[a-1]-arr[b-1]:cout<<arr[b-1]-arr[a-1];
            cout<<'\n';
        }
        
    }
    
    return 0;
}