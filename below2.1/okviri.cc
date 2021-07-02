#include <iostream>
using namespace std;

int main(){
    string str;
    cin>>str;
    for (int i = 0; i < str.length(); i++)
    {
        if(i % 3 == 2){
            cout<<"..*.";
        }else{
            cout<<"..#.";
        }
    }
    cout<<".\n";
    for (int i = 0; i < str.length(); i++)
    {
        if(i % 3 == 2){
            cout<<".*.*";
        }else{
            cout<<".#.#";
        }
    }cout<<".\n";

    // 3rd line;
    for (int i = 0; i < str.length(); i++)
    {
        if(i % 3 == 2){
            cout<<"*."<<str[i]<<".";
        }else{
        if(i!=0){
            if((i-1)%3 == 2){
                cout<<"*";
            }
            else{
                cout<<"#";
            }
        }
        else{
            cout<<"#";
        }
            cout<<"."<<str[i]<<".";
        }
    }
    if(str.length()%3 == 0){
        cout<<"*\n";
    }
    else{
        cout<<"#\n";
    }
    // 3rd line ends
    for (int i = 0; i < str.length(); i++)
    {
        if(i % 3 == 2){
            cout<<".*.*";
        }else{
            cout<<".#.#";
        }
    }
    cout<<".\n";
    for (int i = 0; i < str.length(); i++)
    {
        if(i % 3 == 2){
            cout<<"..*.";
        }else{
            cout<<"..#.";
        }
    }
    cout<<".\n";
    return 0;
}