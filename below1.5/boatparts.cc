#include <iostream>
using namespace std;

int main(){
    int p,n;
    cin>>p>>n;
    string s;
    string mem[n];
    int rec = 0;
    bool exis;
    int day = -1;
    for (int i = 0; i < n; i++)
    {
        cin>>s;
        exis = false;
        for (int j = 0; j < n; j++)
        {   
            if(s==mem[j]){
                exis = true;
            }
        }
        if(exis == false && rec<p){
            rec++;
            mem[i] = s;
        }
        if(rec==p){
            day = i+1;
            rec++;
        }

        
    }
    day == -1? cout<<"paradox avoided":cout<<day;
    
    return 0;
}