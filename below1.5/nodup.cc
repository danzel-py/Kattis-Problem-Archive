#include <iostream>
#include <regex>
#include <string>
using namespace std;

// input: the sun is the one
// output: no

int main(){
    string rawinp,lastword,inpdupe;
    int indbefore, indafter;
    getline(cin,rawinp);

    int a = rawinp.length();
    string array[a];
    int countarr = 0;

    indafter = 0;
    lastword = rawinp;
    for(int i = 0; i<a; i++){
        if(rawinp[i] == ' '){
            inpdupe = rawinp;
            indbefore = indafter;
            indafter = i;

            inpdupe.erase(indafter);
            if(countarr!=0) inpdupe.erase(0,indbefore+1);

            array[countarr] = inpdupe;
            countarr++;
        }
    }
    lastword.erase(0,indafter+1);
    array[countarr]=lastword;

    int j = 0;
    while(array[j]!=""){
        j++;
    };

    string finalarr[j];

    for(int k = 0; k<j; k++){
        finalarr[k] = array[k];
    }

    sort(finalarr,finalarr+j);
    bool foundupe = false;
    for(int i = 0; i<j; i++){
        if(i!=0){
            if(finalarr[i]==finalarr[i-1]){
                foundupe = true;
            }
        }
    }

    string result = foundupe? "no" : "yes";
    cout<<result;
    return 0;
}