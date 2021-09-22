#include <iostream>
using namespace std;

int main(){
    string str;
    getline(cin,str);
    for(int i = 0; i<str.length() ;i++){
        if(str[i]=='a'||str[i]=='i'||str[i]=='u'||str[i]=='e'||str[i]=='o'){
            if(str[i+1]=='p' && str[i+2]==str[i]){
                i++;
                i++;
            }
        }
        cout<<str[i];
    }
    return 0;
}