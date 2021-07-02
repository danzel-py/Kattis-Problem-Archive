#include <iostream>
using namespace std;

int main(){
    int dtott;
    cin>>dtott;
    int mem2;
    int mem1;
    cin>>mem2;
    cin>>mem1;
    int least = 1000;
    int memleast;
    int index;
    int d;
    for (int i = 0; i < dtott-2; i++)
    {
        cin>>d;
        memleast = least;
        least = min(least, max(d,mem2));
        if(memleast != least){
            index = i+1;
        }
        mem2 = mem1;
        mem1 = d;
    }
    cout<<index<<' '<<least;
    
    return 0;
}