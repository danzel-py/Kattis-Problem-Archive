#include <iostream>
#include <cstring>
#include <algorithm>
using namespace std;

string string128(__int128_t x){
    string wow = "";
    while (true)
    {
        int nokoru = x%10;
        x/=10;
        wow = to_string(nokoru) + wow;
        if(x==0){
            break;
        }
    }
    return wow;
    
}

int main(){
    int arr[10];
    for (int i = 0; i < 10; i++)
    {
        cin>>arr[i];
    }
    int n;
    cin>>n;
    int per[10];
    memset(per,0,sizeof(per));
    for (int i = 9; i > 9-n; i--)
    {
        per[i] = 1;
    }
    __int128_t sum = 0;
    do{
        __int128_t localsum = 1;
        for (int i = 0; i < 10; i++)
        {
            if(per[i] == 1){
                localsum*=arr[i];
            }
        }
        sum += localsum;
    }while(next_permutation(per,per+10));
    unsigned long long upi = sum/100000000;
    unsigned long long downi = sum%100000000;
    cout<<string128(sum);
    // cout<<'\n'<<"100000000000000000000";
    
    return 0;
}