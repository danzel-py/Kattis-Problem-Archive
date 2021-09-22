#include <iostream>
#include <map>
using namespace std;

int main(){
    int n, tc;
    int point;
    string str;
    cin>>n>>tc;
    map<string,int> getpoint;
    string keyword;
    for (int i = 0; i < n; i++)
    {
        cin>>keyword>>point;
        getpoint[keyword] = point;
    }
    int sum;
    for (int i = 0; i < tc; i++)
    {
        sum =0;
        while (true)
        {
            cin>>str;
            if(str == "."){
                break;
            }
            sum+= getpoint[str];
        }
        cout<<sum<<'\n';
    }
    

    
    return 0;
}