#include <iostream>
using namespace std;

int main(){
    double b,br,bs,a,as,nt;
    cin>>b>>br>>bs>>a>>as;
    double now = 0;
    nt = 0;
    while (now <= (br-b) * bs)
    {
        now+=as;
        nt++;
    }
    cout<<nt+a;
    

}