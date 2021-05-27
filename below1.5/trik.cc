#include <iostream>
using namespace std;

int main(){
    int pos = 1;
    string inp;
    cin>>inp;
    for (int i = 0; i < inp.length(); i++){
        switch(inp[i]){
            case 'A':
                if(pos == 1){
                    pos = 2;
                }
                else if(pos == 2){
                    pos = 1;
                }
                break;
            case 'B':
                if(pos == 2){
                    pos = 3;
                }
                else if (pos == 3)
                {
                    pos = 2;
                }
                break;
            case 'C':
                if (pos == 3)
                {
                    pos = 1;
                }
                else if (pos == 1)
                {
                    pos = 3;
                }
                break;
        }
    }
    cout<<pos;
    
    return 0;
}