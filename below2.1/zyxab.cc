#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

bool bsort(string &s1, string &s2){
    if(s1.length() == s2.length()){
        return s1>s2;
    }
    else{
        return s1.length()<s2.length();
    }
}

int main(){
    vector<string> v;
    int n;
    cin>>n;
    string candidate;
    for (int i = 0; i < n; i++)
    {
        cin>>candidate;
        if(candidate.length()<5){
            continue;
        }
        string candidatekw = candidate;
        sort(candidatekw.begin(),candidatekw.end());
        bool dupe = false;
        for (int j = 1; j < candidatekw.length(); j++)
        {
            if(candidatekw[j] == candidatekw[j-1]){
                dupe = true;
                break;
            }
        }
        if(dupe){
            continue;
        }
        v.push_back(candidate);
    }
    if(v.empty()){
        cout<<"neibb!";
        return 0;
    }
    sort(v.begin(),v.end(),bsort);
    cout<<v.front();
    return 0;
}