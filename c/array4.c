#include<stdio.h>
int main()
{
  int a[100],b[100],i,loc,m,n;
  int result[100];

  printf("enter a arr size:");
  scanf("%d",&m);
  printf("enter b arr size:");
  scanf("%d",&n);
  printf("enter element a:");
  for(i=0;i<m;i++)
  {
    scanf("%d",&a[i]);
  }

  printf("enter element b:");
  for(int i=0;i<n;i++)
  {
    scanf("%d",&b[i]);
  }

  scanf("%d",&loc);

  for(i=0; i<loc; i++) result[i] = a[i];
  for (i=0; i<n; i++) result[loc + i] = b[i];
  for(i=loc; i<m; i++) result[i+n] = a[i];
  for (i=0; i<m+n; i++) printf("%d ", result[i]);

/*
  for(i=n-1;i>=loc;i--)
  {
     a[m+i]=a[i];
   }

   for(int i=0;i<n;i++)
  {
       a[loc+i]=b[i];
  }
   for(i=0;i<n-m;i++)
   {
    printf("%d ",a[i]);
  }*/
}
