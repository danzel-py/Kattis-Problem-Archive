#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    string word,per;
    cin>>word>>per;
    string news = "";
    bool found,lose;
    int c = 0,w = 0;
    lose = false;

    int a=word.length();
    sort(word.begin(),word.end());
    news+=word[0];
    for (int i = 0; i < a-1; i++)
    {
        if(word[i]!=word[i+1]){
            news += word[i+1];
        }
    }
    


    for (int i = 0; i < per.length(); i++)
    {
        found = false;
        for (int j = 0; j < news.length(); j++)
        {
            if(per[i]==news[j]){
                found = true;
                break;
            }
        }
        if(found == false){
            c++;
            if(c==10){
                lose = true;
                break;
            }
        }
        else{
            w++;
            if(w==news.length()){
                break;
            }
            
        }
        

        
    }
    lose? cout<<"LOSE":cout<<"WIN";
    
    return 0;
}