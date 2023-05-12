#include <stdio.h>

int main() {

  int i, N, fat=1;

  printf("Enter a number from 0 to 10: ");
  scanf("%i", &N);
  printf("\n\033[1mDisplaying values from 1 to %i and its factorial!: \n\033[0m", N);
  
  printf("\n0! = 0");
  
  for (i=1; i<=N; i++) {
    fat *= i;
    printf("\n%i! = %i", i, fat);
  }
}
