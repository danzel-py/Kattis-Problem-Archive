#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    int n;
    cin>>n;
    int sum = 0;
    string str;
    for (int i = 0; i < n; i++)
    {
        cin>>str;
        transform(str.begin(),str.end(),str.begin(),::tolower);
        for (int k = 0; k < str.length()-3; k++)
        {
            if(str[k]=='p'||str[k]=='r'){
                if(str[k]=='p'&&str[k+1]=='i'&&str[k+2]=='n'&&str[k+3]=='k'){
                    sum++;
                    break;
                }
                else if(str[k]=='r'&&str[k+1]=='o'&&str[k+2]=='s'&&str[k+3]=='e'){
                    sum++;
                    break;
                }
            }
        }
        
        
    }
    if(sum == 0){
        cout<<"I must watch Star Wars with my daughter";
        return 0;
    }
    cout<<sum;
    
    return 0;
}