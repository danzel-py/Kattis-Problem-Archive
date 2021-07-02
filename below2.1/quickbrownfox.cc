#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    int tes;
    cin>>tes;
    string str;
    cin.ignore(101,'\n');
    string res,missing;
    bool found;
    for (int i = 0; i < tes; i++)
    {
        missing="";
        res="";
        getline(cin,str);
        copy_if(str.begin(),str.end(),back_inserter(res),::isalpha); // WOW!!
        transform(res.begin(),res.end(),res.begin(),::tolower);     // V COOL
        sort(res.begin(),res.end());
        for (int k = 97; k < 123; k++)
        {
            found = false;
            for (int l = 0; l < res.length(); l++)
            {
                if(int(res[l])==k){
                    found = true;
                    break;
                }
            }
            if(found == false){
                missing += char(k);
            }
        }
        if(missing==""){
            cout<<"pangram\n";
        }
        else{
            cout<<"missing "<<missing<<'\n';
        }
        
        
        
    }

    
    
    return 0;
}