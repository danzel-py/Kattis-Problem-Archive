#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    int n,x;
    string cit;
    cin>>n;
    bool found;
    int count;
    for (int i = 0; i < n; i++)
    {   
        count = 0;
        cin>>x;
        string arr[x];
        for (int i = 0; i < x; i++)
        {
            cin>>cit;
            found = false;  
            for (int j = 0; j < x; j++)
            {
                if(cit==arr[j]){
                    found = true;
                }
            }
            if(found == false){
                arr[i] = cit;
                count++;
            }
            
        }
        cout<<count<<'\n';
        
    }
    
    return 0;
}