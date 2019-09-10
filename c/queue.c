#include<stdio.h>
#include<stdlib.h>
#define size 5
int queue[size],front=0,rear=0;
void enqueue(int element);
void dequeue(void);
void Traverse(void);
int main()
{
  int ch=1,element;
  while(ch)
  {
  printf("1.enqueue\n");
  printf("2.dequeue\n");
  printf("3.traverse\n");
  printf("4.exit\n");

  printf("enter u r choice\n");
  scanf("%d",&ch);
   switch(ch)
   {
     case 1:  printf("enter the element\n");
              scanf("%d",&element);
              enqueue(element);
              break;
     case 2:dequeue();
            break;
     case 3:Traverse();
            break;
     case 4:exit(0);
     default:
         printf("Choice INVALID\n");
     }

   }
}
void enqueue(int element)
{
    if(size==rear)
    {
      printf("queue is full\n");
    }
    else
    {

      queue[rear]=element;
      rear++;
    }
}
void dequeue()
{
  if(rear==front)
  {
    printf("queue is empty\n");
  }
  else
  {
    printf("%d deleted element\n",queue[front]);
    for(int i=0;i<rear-1;i++)
    {
      queue[i]=queue[i+1];
    }
    rear--;
  }
}
void Traverse()
{
  if(rear==front)
  {
    printf("queue is empty\n");
  }
  else
  {
    printf("the queue elelment are:\n");
    for(int i=0;i<rear;i++)
    {
      printf("%d ",queue[i]);
    }
  }
}
