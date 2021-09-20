#include <math.h>
#include <stdlib.h>
#include <stdio.h>

int main(int argc, char** argv){
  int x;
  scanf("%d", &x);
  char a,b,c;
  int okl = 1;
  int okr = 1;
  int lb = 8;
  int lt = 8;
  int rt = 8;
  int rb = 8;
  while (x--)
  {
    scanf(" %c%c %c",&a,&b,&c);
    getchar();
    // printf("%c\n",c);
    if(a == '-' || a == '+'){
      if(c == 'b'){
        okl = 0;
      }else{
        if(a == '-'){
          lb--;
        }else{
          lt--;
        }
      }
    }else{
      if(c == 'b'){
        okr = 0;
      }else{
        if(b=='-'){
          rb--;
        }else{
          rt--;
        }
      }
    }
  }
  // printf("%d %d %d %d\n",lt,lb,rt,rb);
  // printf("%d %d", okl,okr);
  if(okl && !okr && lt && lb){
    printf("0");
  }else if (okr && !okl && rt && rb)
  {
    printf("1");
  }else{
    printf("2");
  }
  
  
  return 0;
}