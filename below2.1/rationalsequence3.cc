#include <iostream>
using namespace std;

int main(){
    int tc;
    int num;
    cin>>tc;
    unsigned int x;
    unsigned int left,right;
    string str;
    for (int i = 0; i < tc; i++)
    {
        cin>>num>>x;
        str.clear();
        while(x!=1){
            if(x%2 == 0){
                str = "L" + str;
            }else{
                str = "R" + str;
            }
            x/=2;
        }
        right = 1;
        left = 1;
        for (int j = 0; j < str.length(); j++)
        {
            if(str[j] == 'L'){
                right += left;
            }
            else{
                left += right;
            }
        }
        cout<<num<<' '<<left<<'/'<<right<<'\n';
        
    }
    
    return 0;
}