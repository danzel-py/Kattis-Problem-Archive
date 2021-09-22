#include <iostream>
using namespace std;

int main(){
    int res,menu;
    cin>>res;
    string bestresto = "-1";
    for (int i = 0; i < res; i++)
    {
        cin>>menu;
        string title;
        cin.ignore(255,'\n');
        getline(cin,title);
        bool sup = false;
        bool peki = false;
        string dish;
        for (int j = 0; j < menu; j++)
        {
            getline(cin,dish);
            if(dish == "pea soup"){
                sup = true;
            }
            if(dish == "pancakes"){
                peki = true;
            }
        }
        if(sup && peki && bestresto == "-1"){
            bestresto = title;
        }
        
    }
    if(bestresto == "-1"){
        cout<<"Anywhere is fine I guess";
    }else{
        cout<<bestresto;
    }
    return 0;
}