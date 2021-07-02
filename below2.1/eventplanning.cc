#include <iostream>
using namespace std;

int main(){
    int n,b,w,h;
    cin>>n>>b>>h>>w;
    int price;
    int spend = 500001;
    int av;
    for (int i = 0; i < h; i++)
    {
        bool ava = false;
        cin>>price;
        for (int j = 0; j < w; j++)
        {
            cin>>av;
            if(av >= n){
                ava = true;
            }
        }
        if(ava){
            spend = min(spend, n*price);
        }
        
    }
    
    spend<=b? cout<<spend:cout<<"stay home";
    

    return 0;
}