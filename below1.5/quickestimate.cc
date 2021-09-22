#include <iostream>
using namespace std;

int main(){
    int x;
    string n;
    int sum;
    cin>>x;
    for (int i = 0; i < x; i++){
        sum = 0;
        cin>>n;
        for(int i = 0; i<n.length();i++){
            sum+=1;
        }
        cout<<sum<<'\n';
    }
    return 0;
}