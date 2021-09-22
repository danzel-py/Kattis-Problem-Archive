#include <iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    string name, d1,d2;
    int c;
    for (int i = 0; i < n; i++)
    {
        cin>>name>>d1>>d2>>c;
        d1.erase(4);
        d2.erase(4);
        cout<<name<<' ';
        if(stoi(d1)<2010&&stoi(d2)<1991){
            if(c>40){
                cout<<"ineligible";
            }
            else{
                cout<<"coach petitions";
            }
        }
        else{
            cout<<"eligible";
        }
        cout<<'\n';
    }

    
    return 0;
}