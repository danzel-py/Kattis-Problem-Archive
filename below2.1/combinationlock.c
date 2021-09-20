#include <math.h>
#include <stdlib.h>
#include <stdio.h>

int main(int argc, char** argv){
  int a,b,c,d;
  // FILE *fptr;
  // fptr = fopen("res.txt","w");
  while (scanf("%d %d %d %d", &a, &b, &c, &d) && (a||b||c||d))
  {
    
    int rotary = 0;
    rotary+=(a-b+40)%40;
    rotary+=(c-b+40)%40;
    rotary+=(c-d+40)%40;
    printf("%d\n", rotary*9 + 1080);
    
  }
  
  
  return 0;
}