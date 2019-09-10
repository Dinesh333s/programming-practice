#include<stdio.h>
#include<math.h>
int main()
{
	int i,j,row,col,c1,c2;
  scanf("%d%d",&row,&col);

  /*  for(i=1;i<=5;i++)
    {
        for(j=1;j<=5;j++)
        {
            if(i==1 ||j==1 || i==5|| j==5)
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }
            printf("\n");
    }
}*/

for(i=1;i<=row;i++)
{
  for(j=1;j<=col;j++)
  {
    if(i==1||j==1||i==row||j==col)
    {
      printf("3");
    }

    else
    {

        if(i==3 && (j==3) )
        {
          printf("1");
        }
              else
              {
            printf("2");
               }
    }
 }
  printf("\n");
}
}
