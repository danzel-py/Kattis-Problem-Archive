#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    string str;
    string sr="";
    int c=0,max=0;
    for (int i = 0; i < 5; i++)
    {
        cin>>str;
        str.erase(1,1);
        sr += str;
    }
    sort(sr.begin(),sr.end());
    for (int j = 1; j < 5; j++)
    {
        if(sr[j]==sr[j-1]){
            c++;
        }
        else{
            c=0;
        }
        if(c>max){
            max = c;
        }
    }
    cout<<max+1;
    
    
    return 0;
}