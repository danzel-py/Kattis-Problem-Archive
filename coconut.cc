#include <iostream>
#include <vector>
using namespace std;

    // batu = 3
    // splitbatu = 2
    // tepong = 1
    // meninggoy = -1
    // sans = 0


int main(){
    int r;
    int p2;
    int p;
    cout<<"ok";
    cin>>r;
    cout<<"ok";
    cin>>p;
    cout<<"ok";
    int arr[20];
    for (int i = 0; i < p+p; i+=2)
    {
        arr[i] = 3;
        arr[i+1] = 0;
        cout<<arr[i]<<arr[i+1];
    }
    vector<int> lol;

    int dead;
    int pos = -1;
    bool fin;
    int steps;
    while (true)
    {
        dead = 0;
        steps = r;
        while (steps>0)
        {
            steps--;
            pos++;
            if(pos == p*2){
                    pos = 0;
            }
            while(arr[pos] == -1){
                pos++;
                if(pos == p*2){
                    pos = 0;
                }
                dead++;
                if(dead==p*2){
                    fin = true;
                    break;
                }
            }
            while(arr[pos] == 0){
                pos++;
                if(pos == p*2){
                    pos = 0;
                }
            }
        }
        if(arr[pos] == 3){
            arr[pos+1] = 2;
            arr[pos] = 2;
            pos--;
            pos = max(pos,0);
        }else if (arr[pos] == 2)
        {
            arr[pos] = 1;
        }else if (arr[pos] == 1)
        {
            arr[pos] = -1;   
            lol.push_back(pos);
        }
        
        
        

        
    }
    cout<<lol.back();
    
    
    return 0;
}