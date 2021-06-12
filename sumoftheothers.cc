#include <iostream>
#include <vector>
#include <sstream>
using namespace std;

int main(){
    string str;
    vector<int> v;
    v.reserve(30);
    int fs;
    int sum;
    while (getline(cin,str))
    {
        sum = 0;
        stringstream ss(str);
        while (ss.rdbuf()->in_avail() != 0)
        {
            ss>>fs;
            v.push_back(fs);
            sum+=fs; 
        }
        for(auto nums:v){
            if(nums*2 == sum){
                cout<<nums<<'\n';
                break;
            }
        }
        v.clear();
        
    }
    
    return 0;
}