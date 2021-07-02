#include <iostream>
#include <bitset>
using namespace std;

// GG set

int main(){
    int ing;
    cin>>ing;
    int x[ing],y[ing],a, b;
    for (int i = 0; i < ing; i++)
    {
        cin>>x[i]>>y[i];
    }
    bitset<10> biss;
    int lowestdif = 1000000000;
    for (int i = 1; i < (1<<10); i++)
    {
        biss = bitset<10>(i);
        if(biss[ing] == 1){
            break;
        }
        a = 1;
        b = 0;
        for (int j = 0; j < 10; j++)
        {
            if(biss[j] == 1){
                a*=x[j];
                b+=y[j];
            }
        }
        lowestdif = min(lowestdif, abs(a-b));   
    }

    cout<<lowestdif;
    

    
    return 0;
}