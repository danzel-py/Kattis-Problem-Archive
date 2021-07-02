#include <iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    string str;
    int tb = 0;
    int lr = 0;
    for (int i = 0; i < n; i++)
    {
        cin>>str;
        if(str[0] == '0'){
            tb++;
        }
        if(str[1] == '0'){
            tb++;
        }
        if(str[2] == '0'){
            lr++;
        }
        if(str[3] == '0'){
            lr++;
        }
    }
    if(tb>=lr){
        cout<<lr/2<<' '<<tb-((lr/2)*2)<<' '<<lr%2;
    }else{
        cout<<tb/2<<' '<<tb%2<<' '<<lr-((tb/2)*2);
    }
    
    return 0;
}