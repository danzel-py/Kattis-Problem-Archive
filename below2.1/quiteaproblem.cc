#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main(){
    string str;
    while (getline(cin,str))
    {
        transform(str.begin(),str.end(),str.begin(),::tolower);
        size_t pos = str.find("problem");
        pos == -1? cout<<"no\n":cout<<"yes\n";
        
        
    }
    
    return 0;
}