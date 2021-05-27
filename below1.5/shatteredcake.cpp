#include <iostream>
using namespace std;

int main(){
    int w, n;
    int pw, pl;
    cin>>w;
    cin>>n;

    int sizeSum = 0;
    for(int i = 0; i < n; i++){
        cin>>pw>>pl;
        sizeSum += pw*pl;
    }
    cout<<sizeSum/w<<endl;
    return 0;
}