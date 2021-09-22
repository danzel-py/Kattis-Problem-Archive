#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    string str1,str2;
    for (int i = 0; i < n; i++)
    {
        cin>>str1;
        cin>>str2;
        cout<<str1<<'\n';
        cout<<str2<<'\n';
        for(int i = 0; i<str1.length(); i++){
            str1[i]==str2[i]?cout<<'.':cout<<'*';
        }
        cout<<"\n\n";
    }
    
    return 0;
}