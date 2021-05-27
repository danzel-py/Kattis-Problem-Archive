#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    string sen;
    cin>>sen;
    int a = sen.length();
    double countspc = 0;
    double countlow = 0;
    double countup = 0;
    double countsum = 0;
    for(int i = 0; i < a; i++){
        if(sen[i]=='_'){
            countspc++;
        }
        else if (sen[i]>='A' && sen[i]<='Z'){
            countup++;
        }
        else if(sen[i]>='a' && sen[i]<='z'){
            countlow++;
        }
        else{
            countsum++;
        }
        
    }
    double all = countlow+countspc+countup+countsum;
    cout<<fixed<<setprecision(7)<<countspc/all<<'\n'<<countlow/all<<'\n'<<countup/all<<'\n'<<countsum/all;
    return 0;
}