#include <iostream>
#include <vector>
#include <algorithm>
#include <map>
using namespace std;


int main(){
    vector<int> vect;
    int x;
    cin>>x;
    vect.push_back(2);
    vect.push_back(3);
    vect.push_back(5);
    vect.push_back(7);
    vect.push_back(11);
    bool dv = true;
    for (int i = 12; i < 9974; i++)
    {
        dv = false;
        for (auto b:vect)
        {
            if(i%b == 0){
                dv = true;
                break;
            }
        }
        if(!dv){
            vect.push_back(i);
        } 
    }
    int foo;
    int num;
    map<int,bool> alrd; 
    for (int j = 0; j < x; j++)
    {
        alrd.clear();
        cin>>foo>>num;
        auto it = find(vect.begin(),vect.end(),num);
        if(it == vect.end()){
            cout<<foo<<" "<<num<<" NO\n";
            continue;
        }
        int mem = num;
        int pp = 0;
        bool ishappy = false;
        while (true)
        {
            while (true)
            {
                pp += (mem%10) * (mem%10);
                mem /= 10;
                if(mem == 0){
                    break;
                }
            }
            if(pp == 1){
                ishappy = true;
                break;
            }
            if(alrd[pp]){
                ishappy = false;
                break;
            }
            alrd[pp] = true;
            mem = pp;
            pp = 0;
            
            
        }
        ishappy? cout<<foo<<' '<<num<<" YES\n":cout<<foo<<' '<<num<<" NO\n";
        


    }
    

    return 0;
}