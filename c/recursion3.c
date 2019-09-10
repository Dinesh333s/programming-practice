//given number count
#include<stdio.h>
int fun(int n);
int main()
{
    int n,count;
    scanf("%d",&n);
    count=fun(n);
    printf("%d",count);
}
int fun(int n)
{
    static int count=0;

    if(n!=0)
    {
        count++;
        n=n/10;
        fun(n);
    }
    return count;

}
