#include <stdio.h>

int main(){

  for (int i = 1; i <= 100; i++)
  {
    if (i % 3 == 0 && i % 5 == 0)
    {
      printf("FizzBuzz\n");
    }
    if (i % 3 == 0 )
    {
      printf("Fizz\n");
    }
    if (i % 5 == 0 )
    {
      printf("Buzz\n");
    }
    else{
      printf("%d",i);
    }
    
  }
  

  return 0;
}