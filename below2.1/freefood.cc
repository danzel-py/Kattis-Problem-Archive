#include <iostream>
using namespace std;

int main(){
    int n,a,b;
    cin>>n;
    int sum = 0;
    int day[365] = {0};
    for (int i = 0; i < n; i++)
    {
        cin>>a>>b;
        for (int j = a; j <= b; j++)
        {
            day[j-1] = 1;
        }
    }
    for (int k = 0; k < 365; k++)
    {
        if(day[k]==1){
            sum++;
        }
    }
    
    cout<<sum;
}