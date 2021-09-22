#include <iostream>
using namespace std;
#include <map>

int main(){
    map<char,int> tox;
    map<char,int> toy;
    string astr[4] = {"ABCD","EFGH","IJKL","MNO."};
    string inp[4];
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            tox[astr[i][j]] = i;
            toy[astr[i][j]] = j;
        }
        
    }
    int sum = 0;
    for (int i = 0; i < 4; i++)
    {
        cin>>inp[i];
        for (int j = 0; j < 4; j++)
        {
            if(inp[i][j] == '.'){
                continue;
            }else{
                sum += abs(tox[inp[i][j]] - i) + abs(toy[inp[i][j]] - j);
            }
        }
        
    }
    cout<<sum;

    
    return 0;
}