#include <iostream>
using namespace std;

int main(){
    int n = 0;
    int streak = 0;
    cout<<1<<endl;
    while (true)
    {
    
        if(n == 99){
            break;
        }
        cin>>n;
        if(n == 99){
            break;
        }
        if((n+2)%3 == 0){
            cout<<n+2<<endl;
        }else{
            streak++;
            if(streak == 10){
                cout<<n+2<<endl;
            }else{

            cout<<n+1<<endl;
            }
        }

    }
    
    return 0;
}