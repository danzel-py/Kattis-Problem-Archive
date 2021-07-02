#include <algorithm>
#include <iostream>
using namespace std;

int main()
{
    int arr[3];
    for (int i = 0; i < 3; i++)
    {
        cin >> arr[i];
    }
    sort(arr,arr+3);
    int dif = min(arr[1]-arr[0], arr[2]-arr[1]);
    if(arr[0] + dif != arr[1]){
        cout<<arr[0]+dif;
    }else if (arr[1] + dif != arr[2])
    {
        cout<<arr[1]+dif;
    }else{
        cout<<arr[2]+dif;
    }
    

    return 0;
}