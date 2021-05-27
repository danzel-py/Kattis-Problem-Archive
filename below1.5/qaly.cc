#include <iostream>
using namespace std;

int main(){
    int n;
    double x,y;
    cin>>n;
    double sum;
    for(int i = 0; i < n; i++){
        cin>>x>>y;
        sum += x*y;
    }
    cout<<sum;
    return 0;
}