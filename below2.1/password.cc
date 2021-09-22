#include <iostream>
#include <iomanip>
#include <algorithm>
using namespace std;

int main(){
    int tc;
    cin>>tc;
    string str;
    double prob[tc];
    double sum = 0;
    for (int i = 0; i < tc; i++)
    {
        cin>>str>>prob[i];
        
    }
    sort(prob, prob+tc, greater<double>());
    for (int j = 1; j <= tc; j++)
    {
        sum+= prob[j-1]*double(j);
    }
    
    cout<<fixed<<setprecision(4)<<sum;
    
    return 0;
}