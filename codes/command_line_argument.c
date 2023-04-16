#include <stdio.h>
#include <string.h>

int main(int x, char *y[]) 
{
  
  if(x == 2)
  {
    if((strcmp(y[1], "chibundu") == 0))
    {
          printf("welcome %s to %s\n", y[1], y[0]);
    }
    else
    {
      printf("wrong password \n");
    }
  }    
  else
  {
    printf("Try again \n");
  }
  return 0;
}
