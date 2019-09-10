/*#include<stdio.h>
#include <math.h>

int main(){
	float me = 5.25;
	double you = 5.25;
	printf("%.6f %.6f, %.8f", me, you, fabs(you-me));

	if(fabs(you-me) <= 1e-8)
		printf("Learn C");
	else
		printf("Know C");
	return 0;
}*/
#include<stdio.h>
int main()
{
	int i,j;
  for(i=5;i<=5;i--)
  {
    for(j=i;j<=5;j++)
    {
      printf("%d",j);
    }
    printf("\n");
  }
}
