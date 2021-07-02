#include <map>
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    string open, close, name, enter, exit;
    double time;
    int nday = 1;
    while (cin >> open)
    {
        map <string,double> entertime;
        map<string, double> getcost;
        while (true)
        {
            cin >> enter;
            if (enter == "ENTER")
            {
                cin>>name>>time;
                entertime[name] = time;
            }
            else if (enter == "EXIT")
            {
                cin>>name>>time;
                getcost[name] += time-entertime[name];
                entertime[name] = 0;
            }
            else
            {
                cout<<"Day "<<nday<<'\n';
                for(auto const [key,val]:getcost){
                    cout<<key<<" $"<<fixed<<setprecision(2)<<val/10.0<<'\n';
                }
                cout<<'\n';
                nday++;
                break;
            }
        }
    }
    return 0;
}