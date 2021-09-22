#include <iostream>
using namespace std;

int main(){
    int n,typ;
    cin>>n>>typ;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    int plc = 0;
    switch (typ)
    {
    case 1:
        if( n >= 4){
            for (int i = 0; i <= n-4; i++)
            {
                if(arr[i] == arr[i+1]&& arr[i+2] == arr[i+3] && arr[i] == arr[i+2]){
                    plc++;
                }
            }
            
        }
        plc += n;
        break;
    case 2:
        if(n >1){
            for (int i = 0; i <= n-2; i++)
            {
                if(arr[i] == arr[i+1]){
                    plc++;
                }
            }
            
        }
        break;
    case 3:
        if(n>2){
            for (int i = 0; i <= n-3; i++)
            {
                if(arr[i] == arr[i+1] && arr[i] + 1 == arr[i+2]){
                    plc++;
                }
            }
        }
        if(n>1){
            for (int i = 0; i <= n-2; i++)
            {
                if(arr[i] - 1 == arr[i+1]){
                    plc++;
                }
            }
        }

        break;
    case 4:
        if(n>2){
            for (int i = 0; i <= n-3; i++)
            {
                if(arr[i+2] == arr[i+1] && arr[i] - 1 == arr[i+2]){
                    plc++;
                }
            }
        }
        if(n>1){
            for (int i = 0; i <= n-2; i++)
            {
                if(arr[i] + 1 == arr[i+1]){
                    plc++;
                }
            }
        }

        break;
    case 5:
        if(n > 2){
            for (int i = 0; i <= n-3; i++)
            {
                if((arr[i] == arr[i + 1] && arr[i] == arr[i+2])||(arr[i] -1 == arr[i+1] && arr[i+2] == arr[i])){
                    plc++;
                }
            }
        }    
        if(n > 1){
            for (int i = 0; i <= n-2; i++)
            {
                if(abs(arr[i] - arr[i+1]) == 1){
                    plc++;
                }
            }
        }
        break;
    case 6:
        if(n > 1){
            for (int i = 0; i <= n-2; i++)
            {
                if(arr[i] == arr[i+1] + 2 || arr[i] == arr[i+1]){
                    plc++;
                }
            }
            
        }
        if(n > 2){
            for (int i = 0; i <= n - 3; i++)
            {
                if((arr[i] == arr[i+1] && arr[i] == arr[i+2]) || (arr[i] + 1 == arr[i+1] && arr[i+1] == arr[i+2]))
                {
                    plc++;
                }
            }
        }
        break;
    case 7:
        if(n > 1){
            for (int i = 0; i <= n-2; i++)
            {
                if(arr[i] == arr[i+1] - 2 || arr[i] == arr[i+1]){
                    plc++;
                }
            }
            
        }
        if(n > 2){
            for (int i = 0; i <= n - 3; i++)
            {
                if((arr[i] == arr[i+1] && arr[i] == arr[i+2]) || (arr[i] - 1 == arr[i+2] && arr[i+1] == arr[i]))
                {
                    plc++;
                }
            }
        }
        break;
    default:
        break;
    }

    cout<<plc;
    
    return 0;
}