#include <iostream>
using namespace std;

int main(){
    string str, key;
    cin >> str >> key;
    int len = str.length();
    int keylen = key.length();
    string ori;
    int c = 0;
    while(c<len){
        for (int i = 0; i < keylen; i++)
        {
            if(c==len){
                break;
            }
            int a = int(str[c])-int(key[i]);
            if(a<0){
                a+=26;
            }
            key[i] = char(a+int('A'));
            cout<<char(a+int('A'));
            c++;
        }
        
    }
    return 0;
}