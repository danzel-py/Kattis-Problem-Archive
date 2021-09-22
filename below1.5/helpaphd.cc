#include <iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    string wow,foo;
    cin.ignore(10000,'\n');
    for (int i = 0; i < n; i++)
    {
        getline(cin,wow);
        if(wow == "P=NP"){
            cout<<"skipped\n";
        }
        else{
            for (int i = 0; i < wow.length(); i++)
            {
                if(wow[i]=='+'){
                    foo = wow;
                    int num1 = stoi(foo.erase(i));
                    int num2 = stoi(wow.erase(0,i+1));
                    cout<<num1+num2<<'\n';
                }
            }
            
        }
    }
    
    return 0;
}