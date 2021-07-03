#include <iostream>
using namespace std;


// WA 1xth test?
int main(){
    string arr[12];
    for (int i = 0; i < 12; i++)
    {
        cin>>arr[i];
    }
    bool s1,s2,s3,s4;
    bool couted = false;
    for (int i = 0; i < 10; i++)
    {
        for (int j = i+1; j < 11; j++)
        {
            s1 = arr[i][0] == arr[j][0];
            s2 = arr[i][1] == arr[j][1];
            s3 = arr[i][2] == arr[j][2];
            s4 = arr[i][3] == arr[j][3];
            for (int k = j+1; k < 12; k++)
            {
                if(
                    ((arr[i][0] == arr[k][0]) == s1 && (arr[j][0] == arr[k][0]) == s1)
                  &&((arr[i][1] == arr[k][1]) == s2 && (arr[j][1] == arr[k][1]) == s2)
                  &&((arr[i][2] == arr[k][2]) == s3 && (arr[j][2] == arr[k][2]) == s3)
                  &&((arr[i][3] == arr[k][3]) == s4 && (arr[j][3] == arr[k][3]) == s4)
                ){
                    couted = true;
                cout<<i+1<<' '<<j+1<<' '<<k+1<<'\n';}
                
            }
            
        }
        
    }
    if(!couted){
        cout<<"no sets";
    }
    
    
    return 0;
}