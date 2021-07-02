#include <iostream>
#include <algorithm>
#include <cmath>
#include <vector>
using namespace std;

int main(){
    string aln, source, target;
    int n;
    int inint;
    cin>>n;
    for (int i = 0; i < n; i++)
    {
        cin>>aln>>source>>target;
        int ln = aln.length();
        int tln = target.length();
        inint = 0;
        for (int j = 0; j < ln; j++)
        {
            inint += source.find(aln[j]) * pow(source.length(),ln-j-1);
        }
        int pos = 0;
        vector<int> v;
        while (inint>0)
        {
            v.push_back(inint%target.length());
            inint/=target.length();
        }
        cout<<"Case #"<<i+1<<": ";
        reverse(v.begin(),v.end());
        for(auto a:v){
            cout<<target[a];
        }
        cout<<"\n";
        
        

        
    }
    
    return 0;
}