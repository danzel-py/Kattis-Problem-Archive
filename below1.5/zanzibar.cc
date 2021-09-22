#include <iostream>
using namespace std;

int main(){
    int n;
    int p,memory;
    cin>>n;
    int sum =0;
    for (int i = 0; i < n; i++){
        sum = 0;
        memory = 1;
        do{
            cin>>p;
            if(memory*2<p){
                sum+=p-memory*2;
            }
            memory=p;
        }while(p!=0);
        cout<<sum<<'\n';
    }
    
    return 0;
}