#include <iostream>
using namespace std;

int main(){
    string inp,inp2;
    cin>>inp>>inp2;
    int a = inp.length();

    if(inp[a-1]=='a'||inp[a-1]=='i'||inp[a-1]=='u'||inp[a-1]=='e'||inp[a-1]=='o'){
        inp.erase(a-1,1);
    }else if(inp[a-1]=='x'&&inp[a-2]=='e'){
        inp.erase(a-2,2);
    }
    cout<<inp<<"ex"<<inp2;
    return 0;
}