#include <iostream>
using namespace std;

// FAIL IDK WHY

int main()
{
    string s1, s2;
    cin >> s1 >> s2;
    int arr1[10] = {-1, -1, -1, -1, -1, -1, -1, -1, -1, -1};
    int arr2[10] = {-1, -1, -1, -1, -1, -1, -1, -1, -1, -1};
    int c = 9;
    for (int i = s1.length() - 1; i > -1; i--)
    {
        arr1[c] = int(s1[i]) - int('0');
        c--;
    }
    c = 9;
    for (int i = s2.length() - 1; i > -1; i--)
    {
        arr2[c] = int(s2[i]) - int('0');
        c--;
    }
    for (int i = 0; i < 10; i++)
    {
        if (arr1[i] < arr2[i])
        {
            arr1[i] = -1;
        }
        else if (arr1[i] > arr2[i])
        {
            arr2[i] = -1;
        }
    }
    bool couted = false;
    bool zero = false;

    int yodacount = 0;
    for (int i = 0; i < 10; i++)
    {
        if (arr1[i] > 0)
            cout << arr1[i];
        else if (arr1[i] == 0)
        {
            if(couted){
                cout<<arr1[i];
            }
            else{
                zero = true;
            }
        }
        
        else
            yodacount++;
    }
    if (yodacount > 9)
    {
        cout << "YODA";
    }
    else if (!couted && zero)
    {
        cout<<0;
    }
    cout<<'\n';
    
    yodacount = 0;
    couted = false;
    zero = false;
    for (int i = 0; i < 10; i++)
    {
        if (arr2[i] > 0)
        {
            cout << arr2[i];
            couted = true;
        }
        else if (arr2[i] == 0)
        {
            if(couted){
                cout<<arr2[i];
            }else{
                zero = true;
            }
        }
        else
            yodacount++;
    }
    if(!couted && zero){
        cout<<0;
    }
    if (yodacount > 9)
    {
        cout << "YODA";
    }

    return 0;
}