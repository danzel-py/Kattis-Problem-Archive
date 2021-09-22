#include <iostream>
#include <map>
using namespace std;


int main(){
    int n;
    while(true){
        cin>>n;
        if(n==-1){
            break;
        }
        int arr[n][n];
        map < int , int> mymap;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                cin>>arr[i][j];
            }   
        }

        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < i+1; j++)
            {
                if(arr[i][j]==1){
                    for (int k = 0; k < n; k++)
                    {
                        if(arr[j][k]==1 && arr[k][i]==1){
                            mymap[j]++;
                            mymap[k]++;
                            mymap[i]++;
                        }
                    }
                    
                }
            }
        }

        for (int i = 0; i < n; i++)
        {
            if(mymap[i]==0){
                cout<<i<<' ';
            }
        }
        cout<<'\n';        
        
        
        


        
        
    }
    
}