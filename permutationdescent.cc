#include <iostream>
using namespace std;
// #include <cmath>
#include <vector>

// * Simple Greedy Algorithm

// int eulertri(long long  n, long long k){

//     if(k == 0){
//         return 1;
//     }
//     if(n <= k || n <= 0 ){
//         return 0;
//     }
//     long long res = (n-k) * eulertri(n-1,k-1) + (k + 1)* eulertri(n-1,k);
//     if(res > 1001113 ){
//         res %= 1001113;
//     }
//     return res;
// }

int eulertri(int n, int k, vector<vector<int>> arr)
{
    for (int i = 1; i < n + 1; i++)
    {
        for (int j = 0; j < k + 1; j++)
        {
            if (j == 0)
            {
                arr[i][j] = 1;
                continue;
            }
            if (i > j)
            {
                arr[i][j] = (i - j) * arr[i - 1][j - 1] + (j + 1) * arr[i - 1][j];
                if (arr[i][j] > 1001113)
                {
                    arr[i][j] %= 1001113;
                }
            }
        }
    }
    return arr[n][k];
}

int main()
{
    int tc;
    cin >> tc;
    int n, k;
    for (int i = 0; i < tc; i++)
    {
        cin >> n >> n >> k;
        vector<vector<int>> v(n + 1, vector<int>(k + 1));
        int res = eulertri(n, k, v);
        cout << i + 1 << ' ' << res << '\n';
    }

    return 0;
}