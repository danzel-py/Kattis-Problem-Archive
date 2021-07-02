#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int x;
    string arr[4] = {" * ", " + ", " - ", " / "};
    for (int p = 0; p < n; p++)
    {
        bool found = false;
        cin >> x;

        int mul1;
        int mul2;
        int res;
        
        for (int i = 0; i < 4; i++)
        {
            for (int j = 0; j < 4; j++)
            {
                for (int k = 0; k < 4; k++)
                {
                    if((i == 0 || i == 3)&&(j == 1 || j == 2) &&(k==0||k==3)){
                        if(i == 0){
                            mul1 = 16;
                        }
                        else{
                            mul1 = 1;
                        }
                        if(k == 0){
                            mul2 = 16;
                        }
                        else{
                            mul2 = 1;
                        }
                        if(j==1){
                            res = mul1+mul2;
                        }
                        else{
                            res = mul1-mul2;
                        }
                    }
                    else if ((i == 1 || i == 2) && (j == 0 || j == 3) && (k == 1 || k == 2))
                    {
                        if(j == 0){
                            mul1 = 16;
                        }
                        else{
                            mul1 = 1;
                        }
                        if(i == 2){
                            mul1 *= -1;
                        }
                        if(k == 1){
                            res = mul1 + 8;
                        }
                        else{
                            res = mul1;

                        }
                        
                    }
                    else if ((i == 1 || i == 2) && (j == 1 || j == 2) && (k == 0||k == 3))
                    {
                        mul1 = 4;
                        if(i == 1){
                            mul1 +=4;
                        }else{
                            mul1 -=4;
                        }
                        if(k == 0){
                            mul2 = 16;
                        }
                        else{
                            mul2 = 1;
                        }
                        if(j == 1){
                            res = mul1 + mul2;
                        }
                        else{
                            res = mul1 - mul2;
                        }
                        
                    }
                    else if ((i == 1 || i == 2) &&(j == 0 || j == 3)&&(k == 0 || k ==3))
                    {
                        mul1 = 4;
                        if(i == 2){
                            mul1 *= -1;
                        }
                        if(j == 0){
                            mul1 *= 4;
                        }
                        else{
                            mul1 /= 4;
                        }
                        if(k == 0){
                            mul1 *= 4;
                        }
                        else{
                            mul1/=4;
                        }
                        res = mul1 +4;
                    }
                    
                    else{
                        res = 4;
                        if(i == 0){
                            res *=4;
                        }
                        else if (i == 1)
                        {
                            res += 4;
                        }
                        else if (i == 2)
                        {
                            res -= 4;
                        }
                        else{
                            res /= 4;
                        }
                        if(j == 0){
                            res *=4;
                        }
                        else if (j == 1)
                        {
                            res += 4;
                        }
                        else if (j == 2)
                        {
                            res -= 4;
                        }
                        else{
                            res /= 4;
                        }
                        if(k == 0){
                            res *=4;
                        }
                        else if (k == 1)
                        {
                            res += 4;
                        }
                        else if (k == 2)
                        {
                            res -= 4;
                        }
                        else{
                            res /= 4;
                        }
                        
                        
                    }
                    
                    if(res == x){
                        found = true;
                        cout<<4<<arr[i]<<4<<arr[j]<<4<<arr[k]<<4<<" = "<<x<<'\n';
                        break;
                    }
                    
                }
                if(found) break;
                
            }
            if(found) break;
            
        }
        if(!found){
            cout<<"no solution\n";
        }
        
        
    }

    return 0;
}