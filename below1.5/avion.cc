#include <iostream>
using namespace std;

int main(){
    string s;
    int count =0;
    for (int i = 0; i < 5; i++)
    {
        cin>>s;
        for (int j = 0; j < s.length()-2; j++)
        {
            if(s[j]=='F'&&s[j+1]=='B'&&s[j+2]=='I'){
                cout<<i+1<<' ';
                count++;
            }
        }
        
    }
    if(count == 0){
        cout<<"HE GOT AWAY!";
    }
    
    return 0;
}