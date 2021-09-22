#include <algorithm>
#include <iostream>
using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;

    int arr1[n];
    int arr2[m];

    for (int i = 0; i < n; i++)
    {
        cin >> arr1[i];
    }
    for (int j = 0; j < m; j++)
    {
        cin >> arr2[j];
    }

    sort(arr1, arr1 + n);
    sort(arr2, arr2 + m);
    int c = 0;
    int posx = 0;
    int posz = 0;
    while (posx < m && posz < n)
    {
        if(arr1[posz] <= arr2[posx]){
            c++;
            posz++;
            posx++;
            continue;
        }
        if(arr1[posz] > arr2[posx]){
            posx++;
        }
    }
    cout<<c;
    

    return 0;
}