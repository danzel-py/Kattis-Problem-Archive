#include <map>
#include <iostream>
using namespace std;

map<char,int> ctr;

int main(){
    string st;
    cin>>st;
    int maxx = 0;
    for (int i = 0; i < st.length(); i++)
    {
        ctr[st[i]]++;
        maxx = max(maxx, ctr[st[i]]);
    }
    char a = 'a';
    char b = 'a';
    int numvar = 0;
    for(auto [key,value]:ctr){
        if(value == maxx){
            a = key;
        }
        numvar++;
    }
    if(numvar < 3){
        cout<<0;
        return 0;
    }
    ctr[a] = 0;
    maxx = 0;
    for(auto [key,value]:ctr){
        maxx = max(maxx,value);
    }
    for(auto [key,value]:ctr){
        if(value == maxx){
            b = key;
        }
    }
    int ct = 0;
    for (int i = 0; i < st.length(); i++)
    {
        if(st[i] != a && st[i] != b){
            ct++;
        }
    }
    cout<<ct;
    

    
    
    return 0;
}