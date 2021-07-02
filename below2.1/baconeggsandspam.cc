#include <iostream>
#include <vector>
#include <utility>
#include <sstream>
#include <set>
#include <map>
using namespace std;

int main(){
    int n;
    while (true)
    {
    string raw;
    string name;
    string wow;
    map < string, set < string > > toset;
    set < string > foodlist;
        cin>>n;
        cin.ignore(200,'\n');
        if(n == 0){
            break;
        }
        for (int i = 0; i < n; i++)
        {
            getline(cin,raw);
            stringstream ss(raw);
            ss>>name;
            while(true){
                if(!ss){
                    break;
                }
                ss>>wow;
                toset[wow].insert(name);
                foodlist.insert(wow);
            }
        }
        for (auto const food:foodlist){
            cout<<food<<' ';
            for (auto const j:toset[food]){
                cout<<j<<' ';
            }
            cout<<'\n';
        }
        cout<<'\n';
        
    }
    
    
    return 0;
}