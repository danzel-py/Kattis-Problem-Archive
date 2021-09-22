#include <iostream>
#include <regex>
using namespace std;

int main(){
    regex e("(simon says)(.*)");
    int n;
    cin>>n;
    cin.ignore(1001, '\n');
    string arrs[n];

    for(int i = 0; i<n; i++){
        string inp;
        getline(cin,inp);
        arrs[i]=inp;
    }

    for(int i = 0; i<n; i++){
        if(regex_match(arrs[i],e)){
            arrs[i].erase(0,11);
            cout<<arrs[i]<<"\n";
        }
        else cout<<'\n';
    }




    


    return 0;
}