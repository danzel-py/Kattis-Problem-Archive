#include <iostream>
using namespace std;

int main(){
    int a,b;
    int c;
    while(true){
        cin>>a>>b;
        if(a ==0 && b==0){
            break;
        }
        c = 0;
        while (true)
        {
            while(a%2==0 && a!=0){
                a-=2;
                c++;
            }
            if (b%2==1)
            {
                b+=1;
                c++;
            }
            else{
                if(b!=0&&(a+b/2)%2==0)
                {a++;
                b-=2;
                c++;}
                else{
                    if(b!=0){

                    b++;
                    c++;
                    }
                }
            }
            if(a==0 && b ==0){
                break;
            }
            
        }
        cout<<c<<'\n';
        
    }
    return 0;
}