#include <iostream>
#include <map>
#include <iomanip>
using namespace std;

map<int,double> ctY;
map<int,double> ctN;


int main(){
    int n;
    double cy = 0;
    double cn = 0;
    cin>>n;
    string st;
    for (int i = 0; i < n; i++)
    {
        cin>>st;
        if(st[0] == 'Y'){
            cy++;
            for (int j = 0; j < 3; j++)
            {
                if(st[j+1] == 'Y'){
                    ctY[j]+=1;
                }
            }
            
        }else{
            cn++;
            for (int j = 0; j < 3; j++)
            {
                if(st[j+1] == 'Y'){
                    ctN[j]+=1;
                }
            }
            
        }
    }
    for (int i = 0; i < 3; i++)
    {
        if(ctY[i]/cy<ctN[i]/cn){
            cout<<fixed<<setprecision(2)<<(1-(ctY[i]/cy/ctN[i]*cn))*100<<'\n';
        }
        else{
            cout<<"not effective\n";
        }
    }
    
    
    return 0;
}