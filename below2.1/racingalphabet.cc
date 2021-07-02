#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main(){
    int n;
    cin>>n;
    cin.ignore(121,'\n');
    string str;
    int pos,target;
    double step = 2*M_PI*30/28;
    double length;
    for (int i = 0; i < n; i++)
    {
        pos=-1;
        length=0;
        getline(cin,str);
        for (int j = 0; j < str.length(); j++)
        {
            if(str[j]==' '){
                target = 26;
            }
            else if(str[j]=='\''){
                target = 27;
            }
            else{
                target = int(str[j])-65;
            }
            if(pos==-1){
                pos=target;
            }
            if(pos>target){
                if(pos-target>28-pos+target){
                    length+=28-pos+target;
                }
                else{
                    length+=pos-target;
                }
            }
            else{
                if(target-pos>28-target+pos){
                    length+=28-target+pos;
                }
                else{
                    length+=target-pos;
                }
            }
            pos = target;
        }
        cout<<fixed<<setprecision(6)<<length*step/15+str.length()<<'\n';
    }
    
 
   return 0;
}