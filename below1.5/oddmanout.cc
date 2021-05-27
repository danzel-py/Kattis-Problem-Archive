#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    int test;
    cin>>test;
    int numbers;
    int inp,odd;
    for (int i = 0; i < test; i++)
    {
        cin>>numbers;
        int arr[numbers];
        for(int j = 0; j < numbers; j++){
            cin>>inp;
            arr[j] = inp;
        }
        for(int k = 0; k < numbers; k++){
            if(count(arr, arr+numbers, arr[k])%2!=0){
                odd = arr[k];
            }
        }
        cout<<"Case #"<<i+1<<": "<<odd<<'\n';

        
        
    }
    
    return 0;
}