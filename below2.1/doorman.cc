#include <queue>
#include <iostream>
using namespace std;

int main(){
    int n;
    string str;
    cin>>n>>str;
    int inm = 0, inw = 0;
    queue<char> v;
    for (int i = 0; i < str.length(); i++)
    {
        v.push(str[i]);
    }
    
    char m1,m2 = 'e';
    while(!v.empty()){
        m1 = v.front();
        v.pop();
        if(m1 == 'M'){
            if(inm == inw + n){
                if(m2 == 'e'){
                    m2 = m1;
                    continue;
                }
                else{
                    break;
                }
            }else{
                inm++;
            }
        }else{
            if(inw == inm + n){
                if(m2 == 'e'){
                    m2 = m1;
                    continue;
                }
                else{
                    break;
                }
            }
            else{
                inw++;
            }
        }
        if(m2 == 'M' && !(inm == inw+n)){
            m2 = 'e';
            inm++;
        }else if (m2 == 'W' && !(inw == inm+n))
        {
            m2 = 'e';
            inw++;
        }
        
        if(v.empty()){
            break;
        }

    }
    cout<<inm+inw;
    return 0;
}