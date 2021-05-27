#include <iostream>
#include <regex>
using namespace std;

int main(){
    regex e("(Simon says)(.*)");
    int n;
    cin>>n;
    cin.ignore(10000, '\n'); // IMPORTANT
    string arrs[n];

    for(int i = 0; i<n; i++){
        string inp;
        getline(cin,inp);
        arrs[i]=inp;
    }

    for(int i = 0; i<n; i++){
        if(regex_match(arrs[i],e)){
            arrs[i].erase(0,10);
            cout<<arrs[i]<<"\n";
        }
    }




    


    return 0;
}