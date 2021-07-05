#include <vector>
#include <iostream>
using namespace std;

vector<int> v;

int main(){
    int tc;
    cin>>tc;
    int a,b;
    for (int lll = 0; lll < tc; lll++)
    {
        cin>>a;
        int ar1[a];
        for (int i = 0; i <= a; i++)
        {
            cin>>ar1[i];
        }
        cin>>b;

        // RESERVE IS BAD
        /*
        ! v.reserve(a+b+1);
        */
        // * Turns out i had to manally init the vector
        // ? If so then i might be able to do it faster with array?
        for (int i = 0; i < a+b+2; i++)
        {
            v.push_back(0);
        }
        
        int aw;
        for (int i = 0; i <= b; i++)
        {
            cin>>aw;
            if(aw == 0){
                continue;
            }
            for (int j = 0; j <= a; j++)
            {
                v[i+j] += aw*ar1[j];
            }
        }
        cout<<b+a<<'\n';
        for (int i = 0; i < b+a+1; i++)
        {
            cout<<v[i]<<' ';
        }
        
        cout<<'\n';
        v.clear();
        
        
    }
    
    return 0;
}