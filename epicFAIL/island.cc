#include <vector>
#include <iostream>
using namespace std;

// !? WA, why? lmao;
// ! Ternyata salah baca soal, udh;
// ! tapi WA lagi;

vector<vector<int> > visited;
vector<vector<char> > v;
int arr1[4] = {1,0,0,-1};
int arr2[4] = {0,1,-1,0};

void dfs(int i, int j,  int num){
    if(visited[i][j] !=0){
        return;
    }
    visited[i][j] = num;
    
    for (int k = 0; k < 4; k++)
    {
        if(v[i + arr1[k]][j + arr2[k]] == 'L'){
            dfs(i + arr1[k], j + arr2[k], num);
        }
    }
    return;
    

}

int main(){
    int x,y;
    cin>>x>>y;
    int islandnumber = 0;
    char bchar;

    vector<char> sad;
    vector<int> sad2;


    // with border
    y+=2;
    x+=2;
    for (int j = 0; j < y; j++)
    {
        sad.push_back('W');
        sad2.push_back(0);
    }
    v.push_back(sad);
    visited.push_back(sad2);

    for (int i = 0; i < x-2; i++)
    {
        sad.clear();
        sad2.clear();
        sad.push_back('W');
        sad2.push_back(0);
        for (int j = 0; j < y-2; j++)
        {
            cin>>bchar;
            sad.push_back(bchar);
            sad2.push_back(0);
        }
        sad.push_back('W');
        sad2.push_back(0);
        v.push_back(sad);
        visited.push_back(sad2);
    }
    sad.clear();
    sad2.clear();
    for (int j = 0; j < y; j++)
    {
        sad.push_back('W');
        sad2.push_back(0);
    }
    v.push_back(sad);
    visited.push_back(sad2);

    // ! matrix with border

    // c
    
    int surroundingLand;
    for (int i = 1; i < x-1; i++)
    {
        for (int j = 1; j < y-1; j++)
        {
            if(v[i][j] == 'C'){
                surroundingLand = 0;
                for (int k = 0; k < 4; k++)
                {
                    if(v[i + arr1[k]][j + arr2[k]] == 'L'){
                        surroundingLand++;
                        break;
                    }
                }
                if(surroundingLand > 0){
                    v[i][j] = 'L';
                }
                else{
                    v[i][j] = 'W';
                }
            }
        }
    }

    // now we go dfs for counting island
    
    for (int i = 1; i < x-1; i++)
    {
        for (int j = 1; j < y-1; j++)
        {
            if(visited[i][j] == 0 && v[i][j] == 'L'){
                islandnumber++;
                dfs(i,j,islandnumber);
            }
        }
    }
    
    cout<<islandnumber;
    
    

    

    return 0;
}