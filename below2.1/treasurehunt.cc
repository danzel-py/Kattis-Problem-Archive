#include <iostream>
#include <map>
#include <utility>
using namespace std;

int main(){
    int p,q;
    cin>>p>>q;
    string ch[p];
    int tx,ty;
    map < pair < int, int > , bool > stepmap;
    for (int i = 0; i < p; i++)
    {
        cin>>ch[i];
        
    }
    int posx = 0;
    int posy = 0;
    int c = 0;
    while (true)
    {
        if(stepmap[make_pair(posx, posy)] == true){
            cout<<"Lost";
            break;
        }
        stepmap[make_pair(posx, posy)] = true;
        if(ch[posx][posy] == 'W'){
            if(posy == 0){
                cout<<"Out";
                break;
            }
            posy--;
        }
        else if(ch[posx][posy] == 'E'){
            if(posy == q -1){
                cout<<"Out";
                break;
            }
            posy++;
        }
        else if(ch[posx][posy] == 'S'){
            if(posx == p -1){
                cout<<"Out";
                break;
            }
            posx++;
        }
        else if(ch[posx][posy] == 'N'){
            if(posx == 0){
                cout<<"Out";
                break;
            }
            posx--;
        }
        else
        {
            cout<<c;
            break;
        }
        
        c++;
        
    }
    
    return 0;
}