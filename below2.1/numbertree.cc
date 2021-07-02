#include <iostream>
#include <sstream>
#include <cmath>
using namespace std;

int main(){
    string s;
    getline(cin,s);
    int n;
    string str;
    stringstream ss(s);
    ss>>n>>str;
    if(str==""){
        cout<<int(pow(2,n+1)-1);
    }
    else{
        int c = 0;
        int sum = 0;
        for (int i = str.length()-1; i > -1; i--)
        {
            if (str[i]=='L')
            {
                sum+= pow(2,c)*1;
            }
            else if (str[i]=='R')
            {
                sum+= pow(2,c)*2;
            }
            c++;
        }
        cout<<int(pow(2,n+1)-1-sum);
    }

    return 0;
}