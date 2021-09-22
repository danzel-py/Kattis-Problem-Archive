#include <iostream>
using namespace std;

int main(){
    int hand;
    char trump;
    cin>>hand>>trump;
    string card;
    int sum = 0;
    for(int i =0 ; i<hand*4;i++){
        cin>>card;
        switch(card[0]){
            case 'A':
                sum+=11;
                break;
            case 'K':
                sum+=4;
                break;
            case 'Q':
                sum+=3;
                break;
            case 'J':
                card[1]==trump? sum+=20:sum+=2;
                break;
            case 'T':
                sum+=10;
                break;
            case '9':
                card[1]==trump? sum+=14:sum+=0;
                break;
            default:
                break;
        }
    }
    cout<<sum;
    return 0;
}