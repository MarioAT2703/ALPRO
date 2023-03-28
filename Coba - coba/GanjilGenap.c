#include <stdio.h>


int main()
{
    int a;
  printf("Masukkan sebuah bilangan : ");
  scanf("%d", &a);
  if (a % 2 == 0)
  {
    printf("Bilangan %d adalah genap.\n", a);
  }
  else
  {
    printf("Bilangan %d adalah ganjil.\n", a);
  }
  return 0;
}