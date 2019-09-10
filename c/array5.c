#include<stdio.h>
int main()
{
  int a[10],n,i,pos=0,found=0,del;
  scanf("%d",&n);
  for(i=0;i<n;i++)
  {
    scanf("%d",&a[i]);
  }
  scanf("%d",&del);
  for(int i=0;i<n;i++)
  if(a[i]==del)
  {
    found=1;
    pos=i;
    break;
  }
  if(found==1){
  for(int i=pos;i<n-1;i++)
  {
    a[i]=a[i+1];
  }
  for(i=0;i<n-1;i++)
  {
    printf("%d ",a[i]);
  }
  }
  else{printf("NOT found");}

}
