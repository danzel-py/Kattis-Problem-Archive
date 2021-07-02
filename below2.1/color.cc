#include <algorithm>
#include <iostream>
using namespace std;

int main()
{
    int s, c, k;
    cin >> s >> c >> k;
    int arr[s];
    for (int i = 0; i < s; i++)
    {
        cin >> arr[i];
    }
    sort(arr, arr + s);
    int colornow = -k-10;
    int count = 0;
    int inwash = 0;
    for (int i = 0; i < s; i++)
    {
        inwash++;
        if(inwash==c){
            inwash = 0;
            colornow = arr[i];
            count++;
            continue;
        }
        if(arr[i] - colornow < k+1){
            continue;
        }
        else
        {
            inwash = 0;
            colornow = arr[i];
            count++;
        }
    }

    cout<<count;
    return 0;
}