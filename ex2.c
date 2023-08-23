#include <stdio.h>

int main(){
  int sum;

  printf("Enter the number:");
  scanf("%d", &sum);

  int i=1;

  while (i<= 10)
  {
    sum +=i;
    printf("i: %d, sum: %d\n", i, sum);

    i++;
  }

  return 0;
}