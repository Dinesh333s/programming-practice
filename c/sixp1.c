//0,0,2,1,4,2,6,3,8,4...
#include<stdio.h>
int main()
{
    int n,a=0,b=0,i;
    scanf("%d",&n);
    for(int i=1;i<n;i++)
    {
        if(i%2==0)
        {
            a=a+1;
        }
        if(i%2==1)
        {
            b=b+2;
        }
    }
    if(n%2==0)
    {
        printf("%d",a);
    }
    else
    {
        printf("%d",b);
    }


}
