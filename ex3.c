#include <stdio.h>

int main() {

  int numb = 2; 
  int mult;

  printf("Enter the number:\n",mult);
  scanf("%d", &mult);

  for (int i = 1; i <= mult; i++) {
    printf("%d x %d = %d\n", numb, i, numb * i);
  }
    
  return 0;
}
