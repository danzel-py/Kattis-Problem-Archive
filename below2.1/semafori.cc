#include <iostream>
#include <utility>
using namespace std;

int main(){
    int tl,roadln;
    cin>>tl>>roadln;
    pair <int, pair <int, int > > arr[tl];
    for (int i = 0; i < tl; i++)
    {
        cin>>arr[i].first>>arr[i].second.first>>arr[i].second.second;
    }
    int pos = 0;
    int time = 0;
    int lightth = 0;
    bool isgreen;
    while (true)
    {
        isgreen = true;
        if(lightth<tl){if(arr[lightth].first == pos){
            if((time%(arr[lightth].second.first + arr[lightth].second.second)) <= arr[lightth].second.first
            &&(time%(arr[lightth].second.first + arr[lightth].second.second)) != 0){
                isgreen = false;
            }
            else{
                lightth++;
            }
        }}
        if(isgreen){
            pos++;
            time++;
        }else{
            time++;
        }
        if(pos == roadln){
            break;
        }
    }
    cout<<time-1;
    
    
    return 0;
}