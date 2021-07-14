#include <iostream>
using namespace std;

int main(){
    int m=-1,n=-1;
    while(true){

    cin>>m>>n;
    if(m==0&&n==0){
        break;
    }
    int arrm[m], arrn[n];
    for (int i = 0; i < m; i++)
    {
        cin>>arrm[i];
    }
    for (int i = 0; i < n; i++)
    {
        cin>>arrn[i];
    }
    int sum=0;
        //start counting
        int c = 0;
        for (int j = 0; j < m; j++)
        {   
            for (int k = c; k < n; k++)
            {
                if(arrn[k]>arrm[j]){
                    break;
                }
                if(arrm[j]==arrn[k]){
                    sum++;
                    c=k;
                    break;
                }
            }
            
        }
        cout<<sum<<'\n';
    }
    
    
    
    return 0;
}