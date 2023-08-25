# include <stdio.h>

int main(){

  int numb;

  printf("Enter the number:\n",numb);
  scanf("%d", &numb);

  for (int i = 1; i <= 10; i++)
  {
    printf("%d * %d =%d\n", i , numb, i*numb);
  }
  

  return 0;
}