#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    string str1, str2, strnew;
    cin >> str1 >> str2;
    strnew = str1;
    if(n%2 == 1){
        for (int i = 0; i < str1.length(); i++)
        {
            if(str1[i] == '1'){
                strnew[i] = '0';
            }
            else
            {
                strnew[i] = '1';
            }
            
        }
    }
    if(strnew == str2){
        cout<<"Deletion succeeded";
    }
    else{
        cout<<"Deletion failed";
    }
    return 0;
}