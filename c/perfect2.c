//perfect num in range
#include<stdio.h>
int main()
{
    int i,n,limit,sum=0,temp;
    scanf("%d",&limit);

    for(n=1;n<=limit;n++)
    {
        sum=0;
        for(i=1;i<n;i++)
        {
            if(n%i==0)
            {
                sum=sum+i;
            }
        }

        if(n==sum)
        {
            printf(" %d",n);
        }
    }
    return 0;
}
