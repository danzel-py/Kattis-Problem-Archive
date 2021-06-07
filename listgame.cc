#include <iostream>
#include <fstream>
using namespace std;

int main(){
    int n;
    n = 500000000;
    int c = 0;
    
    bool notprime;
    ofstream myfile;
    myfile.open("listgame.txt");
    myfile<<"{ 2, 3, ";
    for (int i = 5; i < n; i+=2)
    {
        notprime = false;
        for (int j = 3; j < i/2; j++)
        {
            if(i%j == 0){
                notprime = true;
                break;
            }

        }
        if(!notprime){
            myfile<<i<<", ";
        }
        
    }
    myfile<<"}";
    
    
    
    return 0;
}