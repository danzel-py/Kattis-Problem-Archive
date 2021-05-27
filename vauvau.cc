#include <iostream>
using namespace std;

int main(){
    int a,b,c,d;
    cin>>a>>b>>c>>d;
    int x;
    for (int i = 0; i < 3; i++)
    {
        int dogs = 0;
        cin>>x;
        if((x%(a+b)<=a)&&x%(a+b)!=0){
            dogs++;
        }
        if((x%(c+d)<=c)&&x%(c+d)!=0){
            dogs++;
        }
        if(dogs == 0){
            cout<<"none";
        }
        else if (dogs == 1)
        {
            cout<<"one";
        }else{
            cout<<"both";
        }
        cout<<'\n';
        
    }
    
    return 0;
}