#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    int n,x,c;
    cin>>n;
    double sum,avg,num;
    for (int i = 0; i < n; i++)
    {
        cin>>x;
        double arr[x];
        sum = 0;
        for (int j = 0; j < x; j++)
        {
            cin>>num;
            arr[j]=num;
            sum += num;
        }
        avg = sum/double(x);
        c = 0;
        for (int l = 0; l < x; l++)
        {
            if(arr[l]>avg){
                c++;
            }
        }
        cout<<fixed<<setprecision(3)<<double(c * 100)/double(x)<<"%\n";
        
        
        
    }
    
}