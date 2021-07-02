
#include <iostream>
    using namespace std;

int main()
{
    int n;
    cin >> n;
    string inp[n];
    string scales[] = {"A", "A#", "B", "C", "C#","D", "D#", "E", "F", "F#", "G", "G#","A", "A#", "B", "C", "C#","D", "D#", "E", "F", "F#", "G", "G#"};
    for (int i = 0; i < n; i++)
    {
        cin >> inp[i];
    }
    bool couted = false;
    for (int k = 0; k < 12; k++)
    {
        bool thiskey = true;
        string notes[] = {scales[k], scales[k+2], scales[k+4], scales[k+5], scales[k+7],scales[k+9],scales[k+11]};
        for (int m = 0; m < n; m++)
        {
            bool found = false;
            for (int l = 0; l < 7; l++)
            {
                if(inp[m] == notes[l]){
                    found = true;
                    break;
                }
            }
            if(!found){
                thiskey = false;
                break;
            }
        }
        if(thiskey){
            cout<<scales[k]<<" ";
            couted = true;
        }
        
    }
    if(!couted){
        cout<<"none";
    }
    return 0;
}