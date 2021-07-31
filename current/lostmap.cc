#include <iostream>
using namespace std;

vector<vector<int>> adjm;
vector<vector<int>> adjl;

int main(){
    int n;
    cin>>n;
    adjm.resize(n,vector<int>(n));
    adjl.resize(n);
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin>>adjm[i][j];
        }
    }



    
    return 0;
}