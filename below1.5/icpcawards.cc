#include <iostream>
#include <regex>
#include <algorithm> // find
using namespace std;

int main(){
    int n;
    string x;
    string uni;
    int j = 0;
    string uniList[12];
    string winnerList[12];
    cin>>n;
    cin.ignore(1000, '\n');
    for(int i =0; i<n; i++){

        getline(cin,x);
        uni = x;
        for(int i = 0; i<50; i++){
            if(uni[i]==' '){
                uni.erase(i);
            }
        }
        if(find(begin(uniList),end(uniList),uni)==end(uniList) && j<12){
            uniList[j] = uni;
            winnerList[j] = x;
            j++;
        }
    }

    for(int i = 0; i<12; i++){
        cout<<winnerList[i]<<"\n";
    }
    return 0;
}