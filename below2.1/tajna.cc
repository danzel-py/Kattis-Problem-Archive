#include <iostream>
#include <cmath>
using namespace std;

int main(){
    string str;
    cin>>str;
    int lon = str.length();
    int row = 0;
    for (int i = 1; i <= (int) sqrt(lon); i++)
    {
        if(lon%i == 0){
            row = i;
        }
    }
    int col = lon/row;
    char arr[col][row];
    int pos =0;
    for (int i = 0; i < col; i++)
    {
        for (int j = 0; j < row; j++)
        {
            arr[i][j] = str[pos];
            pos++;
        }
        
    }

    for (int j = 0; j < row; j++)
    {
        for (int i = 0; i < col; i++)
        {
            cout<<arr[i][j];
        }
        
    }
    
    


    return 0;
}