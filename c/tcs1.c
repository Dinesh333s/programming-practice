
//Declare the printf() function
int printf(const char *format, ...);
int scanf(const char *format, ...);

int main()
{
  int a,b,c;
  scanf("%d%d",&a,&b);
  c=a+b;
  printf("%d",c);
  return 0;
}
