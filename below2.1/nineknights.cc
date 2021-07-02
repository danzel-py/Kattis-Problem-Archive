#include <vector>
#include <iostream>
using namespace std;

vector<vector<char>> v;

int arr1[] = {1,1,2,2,-2,-2,-1,1};
int arr2[] = {2,-2,1,-1,1,-1,2,-2};

bool cheks(int x, int y){
    for (int i = 0; i < 8; i++)
    {
        int xx = x+arr1[i];
        int yy = y+arr2[i];

        if(xx < 0 || xx >= 5 || yy<0 || yy>=5){
            continue;
        }
        if(v[xx][yy] == 'k'){
            return false;
        }
    }
    return true;
    
}

int main(){
    vector<char> foo;
    char cjar;
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            cin>>cjar;
            foo.push_back(cjar);
        }
        v.push_back(foo);
        foo.clear();
    }
    bool noob = false;
    int c = 0;
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            if(v[i][j] != 'k'){
                continue;
            }
            c++;
            if(!cheks(i,j)){
                noob = true;
                break;
            }
        }
        
    }
    if(c!=9){
        noob = true;
    }
    cout<<(noob? "invalid":"valid");
    
    
    return 0;
}