#include <iostream>
using namespace std;

int main(){
    int tc;
    cin>>tc;
    for (int i = 0; i < tc; i++)
    {
        int n;
        cin>>n;
        int max = 0;
        int win;
        bool uniq;
        int sum = 0;
        int x;
        for (int j = 0; j < n; j++)
        {
            cin>>x;
            if(x > max){
                win = j;
                max = x;
                uniq = true;
            }else if (x == max)
            {
                uniq = false;
            }
            sum+=x;
        }
        win+=1;
        if(uniq == false){
            cout<<"no winner";
        }else{
            if(max * 2 > sum){
                cout<<"majority winner "<<win;
            }else{
                cout<<"minority winner "<<win;
            }
        }
        cout<<'\n';
        
    }
    
    return 0;
}