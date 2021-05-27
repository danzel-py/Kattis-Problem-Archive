#include <iostream>
using namespace std;

int main(){
    string s;
    int sum=0;
    cin>>s;
    string sper = "PER";
    string per = "";
    for(int i = 0; i<s.length()/3; i++){
        per += sper;
    }
    for (int i = 0; i < s.length(); i++)
    {
        if(per[i]!=s[i]){
            sum++;
        }
    }
    cout<<sum;
    
}