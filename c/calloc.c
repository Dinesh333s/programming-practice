//c alloc memory allocation
#include <stdio.h>
#include <stdlib.h>
int main()
{
  int *numbers = (int*)calloc(4, sizeof(int));
  int i;
  numbers[0] = 1;
  numbers[1] = 2;
  numbers[2] = 3;
  printf("\nStored integers are ");
  for(i = 0; i < 4; i++)
  printf("\nnumbers[%d] = %d ", i, numbers[i]);
  return 0;
}
