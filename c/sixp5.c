//test 5
#include<stdio.h>
int main()
{
    int a=1,b=1,n;
    scanf("%d",&n);
    for(int i=3;i<=n;i++)
    {
        if(i%2==1)
        {
          a=a*2;
        }
        else
        {
            b=b*3;
        }
    }
    if(n%2==1)printf("%d",a);
    else printf("%d",b);
}
