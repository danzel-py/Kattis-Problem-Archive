#include <iostream>
#include <map>
#include <sstream>
using namespace std;

int main(){
    map<int,int> stepdown;
    int kit;
    cin>>kit;
    cin.ignore(4,'\n');
    int togo;
    string togp;
    string str;
    while (true)
    {
        getline(cin,str);
        stringstream ss(str);
        ss>>togp;
        togo = stoi(togp);
        if(togo == -1){
            break;
        }
        while (ss.rdbuf()->in_avail()!=0)
        {
            ss>>togp;
            stepdown[stoi(togp)] = togo;
        }
    }
    cout<<kit;
    while (stepdown[kit])
    {
        cout<<' '<<stepdown[kit];
        kit = stepdown[kit];
    }
    
    
    return 0;
}