#include <iostream>
#include <cmath>
using namespace std;

int main(){
    int m,n,t;
    double res = 0;
    cin>>m>>n>>t;
    switch (t)
    {
    case 1:
        res = 1;
        for (int i = 2; i <= n; i++)
        {
            res*=i;
            if(res>m){
                break;
            }
        }
        break;
    case 2:
        res = pow(2.0,n);
        break;
    case 3:
        res = pow(n,4.0);
        break;
    case 4:
        res = pow(n,3.0);
        break;
    case 5:
        res = pow(n,2.0);
        break;
    case 6:
        // n log2 n;
        res = n * log2(n);

        break;
    case 7:
        res = n;
        break;
    default:
        break;
    }
    res>m?cout<<"TLE":cout<<"AC";
    return 0;
}