  #include<stdio.h>
  int main()
  {
        int a[100],n,large;
        scanf("%d",&n);

  for(int i=0;i<n;i++)
  {
        scanf("%d",&a[i]);
          large=a[0];
  if(a[i]>a[0])
  {
        large=a[i];

  }
  else
  {
      large=a[0];
  }
  }
  printf("%d",large);
  }
