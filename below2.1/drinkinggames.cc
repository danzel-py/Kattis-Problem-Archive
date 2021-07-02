// 3 bottles of milk on the wall, 3 bottles of milk.
// Take one down, pass it around, 2 bottles of milk on the wall.

// 2 bottles of milk on the wall, 2 bottles of milk.
// Take one down, pass it around, 1 bottle of milk on the wall.

// 1 bottle of milk on the wall, 1 bottle of milk.
// Take it down, pass it around, no more bottles of milk.
#include <iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    string thing;
    cin>>thing;

    for (int i = n; i >= 3; i--)
    {
        cout<<i<<" bottles of "<<thing<<" on the wall, "<<i<<" bottles of "<<thing<<".\n";
        cout<<"Take one down, pass it around, "<<i-1<<" bottles of "<<thing<<" on the wall.\n\n";
    }
    if(n>1){

        cout<<2<<" bottles of "<<thing<<" on the wall, "<<2<<" bottles of "<<thing<<".\n";
        cout<<"Take one down, pass it around, "<<1<<" bottle of "<<thing<<" on the wall.\n\n";
    }
    if(n>0){
        cout<<1<<" bottle of "<<thing<<" on the wall, "<<1<<" bottle of "<<thing<<".\n";
        cout<<"Take it down, pass it around, no more bottles of "<<thing<<".\n";
    }
    
    return 0;
}