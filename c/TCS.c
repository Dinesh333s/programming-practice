1)#include<stdio.h>
int main()
{
	int arr[5][5][5] = {0};
	int *b = arr;
	int *c = arr + 1;
	printf("%d", c - b);
	return 0;
}
2)#include<stdio.h>
int main()
{
	int arr[3], i = 0;
	while(i < 3)
	{
		arr[i] = ++i;
	}
	for(i=0; i<3; i++)
	{
		printf("%d--", arr[i]);
	}
	return 0;
}
3)#include<stdio.h>
int main(){
	signed a;
	unsigned b;
	a = 6u + -16 + 16u + -6;
	b = a + 1;
	if(a == b)
	printf("%d %d",a,b);
	else
	printf("%u %u",a, b);
	return 0;

	4)for loop question no:23
	5)#include<stdio.h>
	int main()
	{
		static int a[ ] = {0, 1, 2, 3, 4};
		int *p[ ] = {a, a + 1, a + 2, a + 3, a + 4};
		int **ptr =  p;
		++*ptr;
		printf("%d  %d  %d", ptr - p, *ptr - a, **ptr);
		return 0;
	}
	ans:0 1 1
	6)#include<stdio.h>
	int main()
	{
		static char *arr[ ]  = {"bike", "bus", "car", "van"};
		char **ptr[ ] = {arr+3, arr+2, arr+1, arr};
		char ***p;
		p = ptr;
		**++p;
		printf("%s",*--*++p + 2);
	}
	ans:ike compiler ans:ke
	-------------------------------------pointers------------------------------------------------
	1)#include<stdio.h>
	#include<string.h>
	int main(){
		char a = 30, b = 5;
		char *p = &a, *q = &b;
		printf("%d", p - q);
		return 0;
	}
	2)#include<stdio.h>
	unsigned long int (*function())[5]{
		static unsigned long int arr[5] = {2, 3, 5, 7, 11};
		printf("%d", *arr);
		return &arr;
	}
	int main(){
		unsigned long int (*ptr)[5];
		ptr = function();
		printf("%d", *(*ptr + 4));
		return 0;
	}
	3)#include<stdio.h>
	int main(){
		int *ptr = 2;
		printf("%d", sizeof(ptr));
		return 0;
	}
	4)#include<stdio.h>
	int main(){
		int *ptr;
		*ptr = 5;
		printf("%d" , *ptr);
		return 0;
	}
	5)#include<stdio.h>
	int main(){
		int a = 36;
		int *ptr;
		ptr = &a;
		printf("%u %u", *&ptr , &*ptr);
		return 0;
	}
	6)#include<stdio.h>
	int main()
	{
		int a = 10, b = 6;
		int *ptr;
		ptr = &b;
		printf(" %d ", a  *ptr);
		return 0;
	}
	7)#include<stdio.h>
	int main()
	{
		int *iptr;
		int i, arr[2][2] = {10, 11, 12, 13};
		iptr = *arr ;
		printf("%d ", *(iptr+2));
		return 0;
	}
	8)#include<stdio.h>
	int main()
	{
		char *cities[] = {"Delhi", "London", "Sydney"};
		int **i = &cities[0];
		printf("%c\n", **i);
		return 0;
	}
	9)#include<stdio.h>
	int main(){
		char *cities[] = {"UAE", "Spain", "America"};
		int **i = &cities[0];
		int **j = &cities[1];
		int **k = &cities[2];
		printf("%c%c%c\n", **i,**j,**k);
		return 0;
	}
	10)#include<stdio.h>
	int main(){
		char array[5] = "Knot", *ptr, i, *ptr1;
		ptr = &array[1];
		ptr1 = ptr + 3;
		*ptr1 = 101;
		for(i = 0; i < 4;i++)
		printf("%c", *ptr++);
		return 0;
	}
	11)#include<stdio.h>
	int main()
	{
		char *str = "His";
		int i;
		for(i = 0; i < strlen(str); i++)
		printf("%s", str++);
		return 0;
	}
	12)#include<stdio.h>
	int main()
	{
		char arr[10] = "Mango", *ptr;
		ptr = (&arr[1]++);
		printf("%s",ptr++);
		return 0;
	}
	13)#include<stdio.h>
	int main(){
		int i = 5;
		void *vptr;
		vptr = &i;
		printf("\nValue of iptr = %d ", *vptr);
		return 0;
	}
	14)#include<stdio.h>
	int main(){
		char *ptr = "void pointer";
		void *vptr;
		vptr = &ptr;
		printf("%s" , ?);
		return 0;
	}
	15)#include<stdio.h>
	#define NULL "error";
	int main()
	{
		char *ptr = NULL;
		printf("%s",ptr);
		return 0;
	}
	16)
	#include<stdio.h>
	int main()
	{
		int i = 5,*ptr;
		ptr= &i;
		void *vptr;
		vptr = &ptr;
		printf("\nValue of iptr = %d ", ?);
		return 0;
	}
	--------------------------------------------function---------------------------------------------------
	1)#include<stdio.h>
	a()
	{
		printf("Function");
	}
	b()
	{
		printf("Function in C");
	}
	c()
	{
		printf("C function");
	}
	main()
	{
		int (*ptr[3])();
		ptr[0] = a;
		ptr[1] = b;
		ptr[2] = c;
		ptr[2]();
		return 0;
	}
	2)#include<stdio.h>
	int main()
	{
		char c = ' ', x;
		getc(c);
		if((c >= 'a') && (c <= 'z'))
		x = convert(c);
		printf("%c", x);
		return 0;
	}
	3)#include<stdio.h>
	void abc();
	int *ptr;
	int main()
	{
		int i, *p = &i;
		abc();
		return 0;
	}
	void  abc()
	{
		int i = 0;
		ptr = &i;
		ptr++;
		*ptr = 3;
		printf("\nFunction in C %d", i);
	}
	4)#include<stdio.h>
	void fun(int);
	int main()
	{
		int a = 3;
		fun(a);
		return 0;
	}
	void fun(int n)
	{
		if (n > 0)
		{
			fun(--n);
			printf("%d ", n);
		}
	}
	5)#include<stdio.h>
	int main()
	{
		int *ptr = fun();
		printf("%d", *ptr);
		return 0;
	}
	int fun()
	{
		int num = 10;
		return num;
	}
