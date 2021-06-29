#include <iostream>
#include <utility>
#include <algorithm>
using namespace std;

bool srotf(pair<string, pair<double,double> > &p1, pair<string, pair<double,double> > &p2){
    return p1.second.first < p2.second.first;
}
bool srots(pair<string, pair<double,double> > &p1, pair<string, pair<double,double> > &p2){
    return p1.second.second < p2.second.second;
}


int main(){
    int n;
    cin>>n;
    pair<string, pair<double,double> > arr[n];
    pair<string, pair<double,double> > arrx[n];
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i].first;
        arrx[i].first = arr[i].first;
        cin>>arr[i].second.first;
        arrx[i].second.first = arr[i].second.first;
        cin>>arr[i].second.second;
        arrx[i].second.second = arr[i].second.second;
    }
    sort(arr,arr+n,srotf);
    sort(arrx,arrx+n,srots);

    string run1,run2,run3,run4;
    string srun1,srun2,srun3,srun4;
    double spe1,spe2,spe3,spe4;
    double sum;
    double lowest = 100;
    for (int i = 0; i < min(5,n); i++)
    {
        sum = 0;
        spe1 = arr[i].second.first;
        run1 = arr[i].first;
        for (int j = 0; j < min(5,n); j++)
        {
            if(arr[i].first == arrx[j].first){
                continue;
            }
            spe2 = arrx[j].second.second;
            run2 = arrx[j].first;
            for (int k = 0; k < min(5,n); k++)
            {
                if(arr[i].first == arrx[k].first || j == k){
                    continue;
                }
                spe3 = arrx[k].second.second;
                run3 = arrx[k].first;
                for (int l = 0; l < min(5,n); l++)
                {
                    if(arr[i].first == arrx[l].first || j ==l || k == l){
                        continue;
                    }
                    spe4 = arrx[l].second.second;
                    run4 = arrx[l].first;
                    sum = spe1+spe2+spe3+spe4;
                    if(sum < lowest){
                        srun1 = run1;
                        srun2 = run2;
                        srun3 = run3;
                        srun4 = run4;
                        lowest = sum;
                    }

                }
                
            }
            
        }
        
        
    }
    cout<<lowest<<'\n'<<srun1<<'\n'<<srun2<<'\n'<<srun3<<'\n'<<srun4;


    

    return 0;
}