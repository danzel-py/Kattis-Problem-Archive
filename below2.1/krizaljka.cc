#include <iostream>
using namespace std;

int main(){
    string s1,s2;
    cin>>s1>>s2;
    for (int i = 0; i < s1.length(); i++)
    {
        for (int j = 0; j < s2.length(); j++)
        {
            if(s1[i]==s2[j]){
                for (int k = 0; k < s2.length(); k++)
                {
                    for (int l = 0; l < s1.length(); l++)
                    {
                        if(l == i)
                        {
                            cout<<s2[k];
                        }
                        else if (j == k)
                        {
                            cout<<s1[l];
                        }
                        else{
                            cout<<'.';
                        }
                        
                        
                    }
                    cout<<'\n';
                    
                }
                return 0;
                
            }
        }
        
    }
    
    return 0;
}