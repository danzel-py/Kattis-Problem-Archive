#include <iostream>
#include <cmath>
using namespace std;

int main(){
    int tc;
    cin>>tc;
    for (int i = 0; i < tc; i++)
    {
        int dots;
        cin>>dots;
        int arr[dots][2];
        int xtot = 0;
        int ytot = 0;
        int x,y;
        for (int j = 0; j < dots; j++)
        {
            cin>>x>>y;
            arr[j][0] = x;
            arr[j][1] = y;
            xtot+=x;
            ytot+=y;
        }
        double xbruh = double(xtot)/double(dots);
        double ybruh = double(ytot)/double(dots);
        double p,s1,s2,s3,area;
        double totalarea= 0;
         for (int k = 0; k < dots; k++)
        {
            s1 = sqrt(pow(double(x)-double(arr[k][0]),2.0) + pow(double(y)-double(arr[k][1]),2.0));
            s2 = sqrt(pow(xbruh-double(arr[k][0]),2.0) + pow(ybruh-double(arr[k][1]),2.0));
            s3 = sqrt(pow(xbruh-double(x),2.0) + pow(ybruh-double(y),2));
            p = (s1+s2+s3)/2;
            area = sqrt(p*(p-s1)*(p-s2)*(p-s3));
            totalarea+=area;
            x = arr[k][0];
            y = arr[k][1];
        } 
        cout<<totalarea<<'\n';
        

        
    }
    
    return 0;
}