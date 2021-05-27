#include <iostream>
#include <sstream>
#include <iomanip>
using namespace std;

int main(){
    string str;
    double sum,c;
    string name, fn;
    while (true)
    {
        getline(cin,str);
        if(str == ""){
            break;
        }
        stringstream ss(str);
        sum = 0;
        c = 0;
        fn.clear();
        while (ss.rdbuf()->in_avail() != 0)
        {
            ss>>name;
            if(int(name[0]) <= int('9')){
                sum+=stod(name);
                c++;
            }else{
                fn += name+' ';
            }
        }
        cout<<fixed<<setprecision(3)<<sum/c<<' '<<fn<<'\n';
        

    }
    
    return 0;
}