#include <iostream>
using namespace std;

int main(){
    int arr[100];
    for (int i = 0; i < 3; i++)
    {
        arr[i] = 0;
    }
    arr[3] = 1;
    int x,sum;
    int num;
    cin>>num;
    for (int i = 4; i < 101; i++)
    {
        x = i+1;
        if(x > num){
            break;
        }
        sum = 0;
        for (int j = 2; j < x-1; j++)
        {
            sum+=(j-1) * (x-1-j);
        }
        arr[i] = arr[i-1] + sum;
    }

    cout<<arr[num-1];

    
    
    return 0;
}