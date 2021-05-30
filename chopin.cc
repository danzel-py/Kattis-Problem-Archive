#include <iostream>
using namespace std;

#define DABABY(a,b) else if(note == a) cout<<b<<' '<<tonality<<'\n'

int main(){
    string note,tonality;
    int c = 1;
    while(cin>>note){
        cin>>tonality;
        cout<<"Case "<<c<<": ";
        c++;
        if(note == "A#"
        ||note == "Bb"
        ||note == "C#"
        ||note == "Db"
        ||note == "D#"
        ||note == "Eb"
        ||note == "F#"
        ||note == "Gb"
        ||note == "G#"
        ||note == "Ab"
        ){
            if(note == "A#"){
                cout<<"Bb "<<tonality;
            }
            DABABY("Bb", "A#");
            DABABY("C#", "Db");
            DABABY("Db", "C#");
            DABABY("D#", "Eb");
            DABABY("Eb", "D#");
            DABABY("F#", "Gb");
            DABABY("Gb", "F#");
            DABABY("Ab", "G#");
            DABABY("G#", "Ab");
            
        }else{
            cout<<"UNIQUE\n";
        }
    }
    return 0;
}