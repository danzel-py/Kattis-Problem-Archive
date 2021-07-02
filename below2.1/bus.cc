#include <iostream>
using namespace std;

int main(){
    int t;
    double x;
    cin>>t;
    for (int i = 0; i < t; i++)
    {
        cin>>x;
        double sum=0;
        for (int j = 0; j < x; j++)
        {
            sum+= 0.5;
            sum*= 2;
        }
        cout<<int(sum)<<'\n';
        
    }
    
    return 0;
}