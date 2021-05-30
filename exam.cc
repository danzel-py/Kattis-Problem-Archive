#include <iostream>
using namespace std;

int main(){
    int k;
    cin>>k;
    string mine,theirs;
    cin>>mine>>theirs;
    int same = 0;
    int dif = 0;
    int wr = mine.length() - k;
    for (int i = 0; i < mine.length(); i++)
    {
        if(mine[i] == theirs[i]){
            same++;
        }
        else{
            dif++;
        }
    }
    cout<<min(same,k) + min(dif, wr);
    
    return 0;
}