#include <math.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int main(int argc, char** argv){
  char str[2049];
  scanf("%[^\n]", str);
  for (int i = 0; i < strlen(str)-1; i++)
  {
    if(str[i] == ';' || str[i] == ':'){
      if(str[i+1] == '-' && i+2 < strlen(str)){
        if(str[i+2] == ')'){
          printf("%d\n", i);
          i+=2;
        }
      }else if (str[i+1] == ')'){
        printf("%d\n", i);
        i++;
      }
    }
  }
  
  
  return 0;
}