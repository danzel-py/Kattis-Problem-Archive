#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    int n,m;
    cin>>n>>m;
    double x;
    double sum = 0;
    for (int i = 0; i < m; i++)
    {
        cin>>x;
        sum+=x;
    }
    double summin = sum - 3*(n-m);
    double summax = sum + 3*(n-m);
    cout<<fixed<<setprecision(4)<<summin/n<<'\n';
    cout<<fixed<<setprecision(4)<<summax/n;
    
    
    
    
    return 0;
}