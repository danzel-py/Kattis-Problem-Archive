#include <iostream>
#include <utility>
#include <string>
#include <algorithm>
using namespace std;

bool spaircompare(const string &s1, const string &s2){
    if(s1[0]!=s2[0]){
        return s1[0]<s2[0];
    }
    else{
        return s1[1]<s2[1];
    }
}

int main()
{
    int xw;
    string inp;
    int c = 0;
    while (true)
    {
        cin >> xw;
        if (xw < 1)
        {
            break;
        }

        string arr[xw];
        for (int i = 0; i < xw; i++)
        {
            cin >> arr[i];
        }
        stable_sort(arr,arr+xw,spaircompare); // IMPORTANT !!
        if (c!=0){
                    cout<<'\n';

        }
        c++;
        for (int j = 0; j < xw; j++)
        {
            cout<<arr[j]<<'\n';
        }
        

    }
    return 0;
}