#include <iostream>
using namespace std;

int main(){
    string a,b;
    cin>>a>>b;
    bool invalid = false;
    int pos = 0;
    for (int i = 0; i < b.length(); i++)
    {
        for (int j = pos; j < a.length(); j++)
        {
            if(b[i] == a[j]){
                if(a[j] == a[pos]){
                    pos++;
                    break;
                }
                else{
                        invalid = true;
                        break;
                    
                }
            }
        }
        if(invalid || pos == a.length()){
            break;
        }
        
    }
    if(pos != a.length()){
        invalid = true;
    }
    invalid? cout<<"FAIL":cout<<"PASS";
    
    return 0;
}