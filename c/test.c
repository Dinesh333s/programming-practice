#include<stdio.h>
#include<stdlib.h>
#define size 5
int stack[size],top=-1;
void push(int element);
int isFull();
int pop();
int isEmpty();
void peek();
void traverse();

int main()
{
    int ch,element;

    while(ch)
    {
        printf("1.push\n");
        printf("2.pop\n");
        printf("3.peek\n");
        printf("4.traverse\n");
        printf("5.exit\n");

        printf("Enter u r choice:\n");
        scanf("%d",&ch);

        switch(ch)
        {
            case 1:printf("enter the element:\n");
            scanf("%d",&element);
            push(element);

            break;
            case 2:element=pop();
            if(element==0)
            {
                printf("stack is underflow");

            }
            else
            {
                printf("%d popped element\n",element);
            }
            break;
            case 3: peek();
            break;
            case 4: traverse();
            break;
            case 5: exit(0);
            break;
            default:
            printf("your choice is invalid\n");
        }
    }
}

void push(int element)
{
    if(isFull())
    {
        printf("stack is full\n");
    }
    else
    {
        top++;
        stack[top]=element;
    }
}
int isFull()
{
    if(top==size-1)
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
        printf("stack is empty");
    }
    else
    {
        printf("%d\n",stack[top]);
    }
}
void traverse()
{
    if(isEmpty())
    {
        printf("stack is empty");
    }
    else
    {
        int i;
        printf("stack element are:\n");
        for(i=0;i<=top;i++)
        {

            printf("%d\n",stack[i]);
        }
    }
}
