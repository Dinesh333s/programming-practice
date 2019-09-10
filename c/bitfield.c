//bit field
#include <stdio.h>
int main()
{
struct sample {
unsigned int b1;
unsigned int b2;
}s1;
struct sample2 {
unsigned int b1:1;
unsigned int b2:1;
}s2;
printf("Size of structure sample : %d ", sizeof(s1));
printf("\nSize of structure sample2 : %d ", sizeof(s2));
return 0;
}
