#include <iostream>
#include <vector>
using namespace std;

int main(){
    string str;
    int maxlen = 0;
    vector<int> allen;
    while(getline(cin,str)){
        maxlen = max(maxlen, int(str.length()));
        allen.push_back(int(str.length())); 
    }
    int sum = 0;
    for (int i = 0; i < allen.size()-1; i++)
    {
        sum+=(maxlen-allen[i])*(maxlen-allen[i]);
    }
    cout<<sum;
    
    return 0;
}