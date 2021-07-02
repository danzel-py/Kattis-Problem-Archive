#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    vector<int> wow;
    int n;
    cin >> n;
    int swow;
    for (int i = 0; i < n; i++)
    {
        cin>>swow;
        wow.push_back(swow);
    }
    sort(wow.begin(), wow.end());
    bool alice = true;
    int a = 0,b = 0;
    while(!wow.empty()){
        if(alice){
            a+= wow.back();
            wow.pop_back();
            alice = false;
        }else
        {
            b+= wow.back();
            wow.pop_back();
            alice = true;
        }
    }
    cout<<a<<' '<<b;
    
    return 0;
}