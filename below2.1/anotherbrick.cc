#include <iostream>
using namespace std;

int main(){
    int h,w,b;
    int bw;
    int sumo = 0;
    int sume = 0;
    bool goof = true;
    cin>>h>>w>>b;
    for (int i = 0; i < b; i++)
    {
        cin>>bw;
        if(sumo + bw <= w){
            sumo += bw;
            
        }
        else{
            if(sumo != w){
                goof = false;
            }
            sumo = bw;
            sume++;
        }
    }
    if(sumo == w){
                sume++;
            }
    if(sume < h || !goof){
        cout<<"NO";
    }else{
        cout<<"YES";
    }
    return 0;
}