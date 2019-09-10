#include<stdio.h>
#include<stdlib.h>
#define CAPACITY 5
int stack[CAPACITY],top=-1;
void push(int);
int isFull(void);
int pop(void);
int isEmpty(void);
void peek(void);
void traverse(void);
int main()
{
  int ch,item;
  while(ch)
  {
    printf("1.PUSH \n");
    printf("2.POP  \n");
    printf("3.PEEK \n");
    printf("4.Traverse\n");
    printf("5.exit \n");

    printf("Enter your choice :\n");
    scanf("%d",&ch);


    switch(ch)
    {
      case 1:printf("enter the item:\n");
      scanf("%d",&item);
      push(item);
      break;
      case 2:item=pop();
      if(item==0)
      {
        printf("stack is underflow\n");
      }
      else
      {
        printf("popped item are: %d\n",item);
      }
      break;
      case 3:peek();
      break;
      case 4:traverse();
      break;
      case 5:exit(0);

      default:
      printf("your choice is INVALID");
    }
  }
}

void push(int element)
{
  if(isFull())
  {
    printf("stack is overflow\n ");
  }
  else
  {
    top++;
    stack[top]=element;
    printf("%d element inserted\n",element);
  }
}
int isFull()
{
  if(top==CAPACITY-1)
  {

    return 1;
  }
  else
  {
    return 0;
  }

}
int pop()
{
  if(isEmpty())
  {
    return 0;
  }
  else
  {
    return stack[top--];
  }
}
int isEmpty()
{
  if(top==-1)
  {
    return 1;
  }
  else
  {
    return 0;
  }
}
void peek()
{
  if(isEmpty())
  {
    printf("stack is empty\n");
  }
  else
  {
    printf("peek element is:%d\n",stack[top]);
  }
}
void traverse()
{
  if(isEmpty())
  {
    printf("stack is empty\n");
  }
  else
  {
    printf("stack element are: \n");
    int i;
    for(i=0;i<=top;i++)
    {
      printf("%d\n",stack[i]);
    }
  }
}
