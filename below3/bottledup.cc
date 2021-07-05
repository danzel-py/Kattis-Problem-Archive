#include <iostream>
#include <vector>
#include <utility>
#include <algorithm>
using namespace std;

bool bsort(pair<int,int> &p1, pair<int,int> &p2){
    return p1.first + p1.second < p2.first + p2.second;
}


int main(){
    int tot,big,smol;
    cin>>tot>>big>>smol;
    if(tot<big && tot<smol){
        cout<<"Impossible";
        return 0;
    }
    if(tot<big && tot%smol == 0){
        cout<<0<<' '<<tot/smol;
        return 0;
    }
    if(big == 0){
        if(tot%smol == 0){
            cout<<0<<' '<<tot/smol;
        }else{
            cout<<"Impossible";
        }
        return 0;
    }
    vector<pair<int,int>> v;
    bool fon = false;
    for (int i = 0; i < tot; i++)
    {
        if(smol*i > tot){
            cout<<"Impossible";
            return 0;
        }
        if((tot - i*smol) % big == 0){
            cout<<(tot-i*smol)/big<<' '<<i;
            return 0;
        }
    }


    
    return 0;
}