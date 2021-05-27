#include <iostream>
#include <map>
using namespace std;

int main(){
    map<string,int> mapstat;
    int n;
    cin>>n;
    string str,name;
    for (int i = 0; i < n; i++)
    {
        cin>>str>>name;
        if(str == "entry"){
            cout<<name<<" entered";
            if(mapstat[name] == 1){
                cout<<" (ANOMALY)";
            }
            mapstat[name] = 1;
        }
        else if (str == "exit")
        {
            cout<<name<<" exited";
            if (mapstat[name] == 0)
            {
                cout<<" (ANOMALY)";
            }
            mapstat[name] = 0;
        }
        cout<<'\n';
        
    }
    
    return 0;
}