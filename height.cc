#include <iostream>
using namespace std;

int main(){
    int tc;
    cin>>tc;
    int num;
    for (int i = 0; i < tc; i++)
    {
        cin>>num;
        int arr[20];
        int sum = 0;
        for (int j = 0; j < 20; j++)
        {
            cin>>arr[j];
            for (int k = 0; k < j; k++)
            {
                if(arr[j] < arr[k]){
                    sum++;
                }
            }
            
        }
        cout<<num<<' '<<sum<<'\n';
        
    }
    
    return 0;
}