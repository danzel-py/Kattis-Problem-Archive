#include <iostream>
#include <map>
using namespace std;

int main(){
    int tc;
    string stname, fsinp, doodoo, foo;
    int ninp;
    int thestart, theend, theinterval;
    cin>>tc;
    int bruh = 0;
    map<char,int> thecounter;
    int cc;
    for (int i = 0; i < tc; i++)
    {
        cin.ignore(100,'\n');
        getline(cin,stname);
        cin>>ninp>>doodoo;
        cc = 0;
        while(cc != ninp)
        {
            cin>>fsinp;
            if(fsinp == "+"){
                cin>>thestart>>theend>>theinterval;
                for (int k = thestart; k <= theend; k+= theinterval)
                {
                    foo = to_string(k);
                    cc++;
                    for (int l = 0; l < foo.length(); l++)
                    {
                        thecounter[foo[l]]++;
                    }
                    
                }
                
            }
            else{
                for (int k = 0; k < fsinp.length(); k++)
                {
                    thecounter[fsinp[k]]++; 
                }
                cc++;  
            }
        }
        bruh = 0;
        cout<<stname<<'\n'<<ninp<<' '<<doodoo<<'\n';
        for (int i = 0; i < 10; i++)
        {
            printf("Make %d digit %d\n", thecounter[char(i + int('0'))], i);
            bruh += thecounter[char(i + int('0'))];
        }
        cout<<"In total "<<bruh;
        if(bruh<2)cout<<" digit\n";
        else cout<<" digits\n";
        




        thecounter.clear();
    }
    
    return 0;
}