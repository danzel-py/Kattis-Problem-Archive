#include <iostream>
#include <cmath>
using namespace std;

int main(){
    int tc;
    cin>>tc;
    int k;
    string str = "0123456789ACDEFHJKLMNPRTVWX";
    for (int i = 0; i < tc; i++)
    {
        cin>>k;
        char cinp;
        int arr[9];
        for (int j = 0; j < 9; j++)
        {
            // * B->8, G->C, I->1, O->0, Q->0, S->5, U->V, Y->V, Z->2

            cin>>cinp;
            if(cinp == 'B'){
                cinp = '8';
            }
            else if(cinp == 'G'){
                cinp = 'C';
            }
            else if(cinp == 'I'){
                cinp = '1';
            }
            else if(cinp == 'O'){
                cinp = '0';
            }
            else if(cinp == 'Q'){
                cinp = '0';
            }
            else if(cinp == 'S'){
                cinp = '5';
            }
            else if(cinp == 'U'){
                cinp = 'V';
            }
            else if(cinp == 'Y'){
                cinp = 'V';
            }
            else if(cinp == 'Z'){
                cinp = '2';
            }
            
            for (int k = 0; k < str.length(); k++)
            {
                if(cinp == str[k]){
                    arr[j] = k;
                }
            }
        }
        cout<<k<<' ';
        if((2*arr[0] + 4*arr[1] + 5*arr[2] + 7*arr[3] + 8*arr[4] + 10*arr[5] + 11*arr[6] + 13*arr[7]) % 27 == arr[8]){
            long long sum = 0;
            for (int ii = 0; ii < 8; ii++)
            {
                sum += (long long)(arr[ii])*pow((long long) (27), (long long) (7-ii));
            }
            cout<<sum<<'\n';            
        }
        else{
            cout<<"Invalid\n";
        }
        
        
    }
    
    return 0;
}