#include <iostream>
using namespace std;

int main(){
    string str1,str2;
    cin >> str1 >> str2;

    int a = max(str1.length(), str2.length());
    int arr1[10002] = {0};
    int arr2[10002] = {0};
    int arr3[10002] = {0};

    int b = 10000, c = 10000;

    for (int i = str1.length()-1; i > -1; i--)
    {
        arr1[b] = int(str1[i])-48;
        b--;
    }
    for (int i = str2.length()-1; i > -1; i--)
    {
        arr2[c] = int(str2[i])-48;
        c--;
    }

    for (int i = 10001; i > 0; i--)
    {
        arr3[i] += arr2[i] + arr1[i];
        if(arr3[i]>9){
            arr3[i-1]+=1;
            arr3[i]-=10;
        }
    }
    



    bool notfound = true;
    for (int i = 0; i < 10001; i++)
    {
        if(arr3[i]!=0 && notfound){
            notfound = false;
        }
        if (!notfound)
        {
            cout<<arr3[i];
        }
        
    }
    

    
    

    return 0;
}