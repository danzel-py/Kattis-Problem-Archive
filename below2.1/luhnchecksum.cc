#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    string str;
    for (int i = 0; i < n; i++)
    {
        int sum = 0;
        cin>>str;
        for (int k = str.length()-1; k > -1; k-=2)
        {
            sum+=int(str[k])-int('0');
        }

        for (int j = str.length()-2; j > -1; j-=2)
        {
            if(int(str[j])-int('0')>4){
                if (int(str[j])-int('0')==5)
                {
                    sum+= 1;
                }else if (int(str[j])-int('0') == 6)
                {
                    sum += 3;
                }else if (int(str[j])-int('0') == 7)
                {
                    sum += 5;
                }
                else if (int(str[j])-int('0')==8)
                {
                    sum+= 7;
                }
                else if (int(str[j])-int('0') == 9)
                {
                    sum+= 9;
                }
            }else{
                sum+= (int(str[j])-int('0'))*2;
            }
        }
        if(sum%10 == 0){
            cout<<"PASS";
        }else{
            cout<<"FAIL";
        }
        cout<<'\n';
        
    }
    
    return 0;
}