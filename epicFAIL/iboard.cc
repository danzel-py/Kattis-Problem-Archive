#include <iostream>
#include <bitset>
using namespace std;

// WTh?

int main(){
    string wow;
    while (getline(cin,wow))
    {
        int zeroe = 0;
        int oneoe = 0;
        for (int i = 0; i < wow.length(); i++)
        {
            int num = int(wow[i]);
            string st = bitset<32>(num).to_string();
            st.erase(0,st.find_first_not_of('0'));
            cout<<st<<'\n';
            for (int j = 0; j < st.size(); j++)
            {
                
                if(st[j] == '0'){
                    zeroe++;
                }else{
                    oneoe++;
                }
                
            }
            
        }
        cout<<oneoe<<zeroe;
        if(oneoe %2 ==0 && zeroe%2==0){
            cout<<"free\n";
        }else{
            cout<<"trapped\n";
        }
        
    }
    
    return 0;
}