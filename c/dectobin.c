#include<stdio.h>
int dectobin(int n);
int main()
{
long int n,b;
scanf("%ld",&n);//10
b=dectobin(n);

}
int dectobin(int n)
{
long int r,base=1,b=0;
while(n>0)
{
r=n%2;//10=0||5=1||0
b=b+r*base;//b=0||b=10||b=0||b=1010
n=n/2;//5||2||1
base=base*10;//10||100||1000
}
printf("%ld",b);
}
