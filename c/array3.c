#include<stdio.h>
int main()
{
int n,arr[100],i,key,loc,j;
scanf("%d",&n);
for(i=0;i<n;i++)
{
scanf("%d",&arr[i]);
}
scanf("%d",&key);
scanf("%d",&loc);
for(int i=n-1;i>=loc;i--)
{
arr[i+1]=arr[i];
}
arr[loc]=key;
for(i=0;i<n+1;i++)
{
printf("%d ",arr[i]);
}
}
/* count dupicate element in array
#include<stdio.h>
int main()
{
    int a[100],n,i,count=0,j;
    scanf("%d",&n);

    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);


    }
    for(i=0;i<n;i++)
    {
     for(j=i+1;j<n;j++)
     {
         if(a[j]==a[i])
         {
             count++;
         }

     }
    }
    printf("%d",count);
}
   */
