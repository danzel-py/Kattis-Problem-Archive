#include <iostream>
#include <string>
using namespace std;
// cape nguli
int main()
{
    string str[7];
    string strexpression = "";
    for (int i = 0; i < 7; i++)
    {
        cin >> str[i];
    }
    for (int i = 0; i < str[1].length(); i += 6)
    {
        if (str[1][i+2] == 'x')
        {
            strexpression += "+";
        }
        else if (str[0][i] == '.' && str[0][i + 4] == 'x')
        {
            strexpression += "1";
        }
        else if (str[1][i] == '.' && str[5][i] == 'x')
        {
            strexpression += "2";
        }
        else if (str[3][i] == 'x' && str[2][i] == '.' &&str[4][i] == '.')
        {
            strexpression += "3";
        }
        else if (str[0][i] == 'x' && str[0][i + 1] == '.')
        {
            strexpression += "4";
        }
        else if (str[0][i] == 'x' && str[1][i + 4] == '.' && str[4][i] == '.')
        {
            strexpression += "5";
        }
        else if (str[0][i] == 'x' &&str[1][i+4] == '.' && str[4][i] == 'x' &&str[4][i+4] == 'x')
        {
            strexpression += "6";
        }
        else if (str[0][i] == 'x' &&str[1][i+4] == '.' && str[4][i] == 'x' &&str[4][i+4] == 'x')
        {
            strexpression += "6";
        }
        else if (str[0][i] == 'x' &&str[1][i+4] == 'x' && str[4][i] == '.' &&str[4][i+4] == 'x'&&str[1][i] == '.')
        {
            strexpression += "7";
        }
        else if (str[0][i] == 'x' &&str[1][i+4] == 'x' && str[4][i] == 'x' &&str[4][i+4] == 'x'&&str[3][i+1] == 'x')
        {
            strexpression += "8";
        }
        else if (str[0][i] == 'x' &&str[1][i+4] == 'x' && str[4][i] == '.' &&str[4][i+4] == 'x')
        {
            strexpression += "9";
        }
        else if (str[0][i] == 'x' &&str[1][i+4] == 'x' && str[4][i] == 'x' &&str[4][i+4] == 'x'&&str[3][i+1] == '.')
        {
            strexpression += "0";
        }
        
    }
    int pos;
    for (int i = 0; i < strexpression.length(); i++)
    {
        if(strexpression[i] == '+'){
            pos = i;
            break;
        }
    }
    int a = stoi(strexpression.substr(0,pos));
    int b = stoi(strexpression.substr(pos));
    string res = to_string(a+b);
    for (int i = 0; i < res.length(); i++)
    {
        if(i != 0){
            cout<<'.';
        }
        if(res[i] == '1'){
            cout<<"....x";
        }else if (res[i] == '4')
        {
            cout<<"x...x";
        }else
        {
            cout<<"xxxxx";
        } 
    }
    cout<<'\n';
    for (int i = 0; i < res.length(); i++)
    {
        if(i != 0){
            cout<<'.';
        }
        if(res[i] == '1' || res[i] == '7' || res[i] == '3' || res[i] == '2'){
            cout<<"....x";
        }else if (res[i] == '4'|| res[i] =='8' || res[i] == '9' || res[i] == '0')
        {
            cout<<"x...x";
        }else
        {
            cout<<"x....";
        } 
    }
    cout<<'\n';
    for (int i = 0; i < res.length(); i++)
    {
        if(i != 0){
            cout<<'.';
        }
        if(res[i] == '1' || res[i] == '7' || res[i] == '3' || res[i] == '2'){
            cout<<"....x";
        }else if (res[i] == '4'|| res[i] =='8' || res[i] == '9' || res[i] == '0')
        {
            cout<<"x...x";
        }else
        {
            cout<<"x....";
        } 
    }
    cout<<'\n';
    for (int i = 0; i < res.length(); i++)
    {
        if(i != 0){
            cout<<'.';
        }
        if(res[i] == '1' || res[i] == '7' ){
            cout<<"....x";
        }else if (res[i] == '0')
        {
            cout<<"x...x";
        }
        else
        {
            cout<<"xxxxx";
        } 
    }
    cout<<'\n';
    for (int i = 0; i < res.length(); i++)
    {
        if(i != 0){
            cout<<'.';
        }
        if(res[i] == '1' || res[i] == '7' ||res[i] == '3' || res[i] == '4' || res[i] == '5' ||res[i] == '9'){
            cout<<"....x";
        }else if (res[i] == '0' || res[i] == '6' || res[i] == '8')
        {
            cout<<"x...x";
        }
        else
        {
            cout<<"x....";
        } 
    }
    cout<<'\n';
    for (int i = 0; i < res.length(); i++)
    {
        if(i != 0){
            cout<<'.';
        }
        if(res[i] == '1' || res[i] == '7' ||res[i] == '3' || res[i] == '4' || res[i] == '5' ||res[i] == '9'){
            cout<<"....x";
        }else if (res[i] == '0' || res[i] == '6' || res[i] == '8')
        {
            cout<<"x...x";
        }
        else
        {
            cout<<"x....";
        } 
    }
    cout<<'\n';
    for (int i = 0; i < res.length(); i++)
    {
        if(i != 0){
            cout<<'.';
        }
        if(res[i] == '1' || res[i] == '7' ||res[i] == '4' ){
            cout<<"....x";
        }
        else
        {
            cout<<"xxxxx";
        } 
    }
    cout<<'\n';
    
    
    



    return 0;
}