#include<stdio.h>
#include<stdlib.h>
struct node
{
  int data;
  struct node* link;
};
struct node* root = NULL;
int len;
void append(void);
void addatbegin(void);
void addatafter(void);
int length(void);
void display(void);
void delete(void);

int main()
{
  int ch;
  while(ch)
  {
    printf("singly linked list:\n");
    printf("1.Append\n");
    printf("2.Add at begin\n");
    printf("3.Add at after\n");
    printf("4.length\n");
    printf("5.Display\n");
    printf("6.Delete\n");
    printf("7.Quit\n");

    printf("Enter your choice:\n");
    scanf("%d",&ch);
    switch(ch)
    {
      case 1: append();
              break;
      case 2: addatbegin();
              break;
      case 3: addatafter();
              break;
      case 4: len=length();
              printf("length is:%d",len);
              break;
      case 5: display();
              break;
      case 6: delete();
              break;
      case 7: exit(1);
      default:
              printf("INVALID CHOICE");
    }
  }
}


void append()
{
  struct node *temp;
  temp=(struct node*)malloc(sizeof(struct node));
  printf("Enter the node data:\n");
  scanf("%d",&temp->data);
  temp->link=NULL;
  if(root==NULL)//list is empty
  {
    root=temp;
  }
  else
  {
    struct node *p;
    p=root;
    while(p->link !=NULL)
    {
      p=p->link;
    }
    p->link=temp;
  }
}


int length()
{
  int count = 0;
  struct node *temp;
  temp=root;
  {
    while(temp->link !=NULL)
    {
      count++;
      temp=temp->link;
    }
    return count;
  }
}


void display()
{
  struct node *temp;
  temp=root;
  if(temp==NULL)
  {
    printf("List is empty!!!!!\n\n");
  }
  else
  {
  while(temp !=NULL)
  {
    printf("%d-->",temp->data);
    temp=temp->link;
  }
  printf("\n\n");
}
}


void addatbegin()
{
  struct node *temp;
  temp=(struct node*)malloc(sizeof(struct node));
  printf("Enter the data:\n");
  scanf("%d",&temp->data);
  temp->link=NULL;
  if(root=NULL)
  {
    root=temp;
  }
  else
  {
    temp->link=root; //Right
    root=temp; //lift
  }
}


void addatafter()
{
  struct node *temp,*p;
  int loc,i=1;
  printf("Enter the loc");
  scanf("%d",&loc);
  len=length();
  if(loc>len)
  {
    printf("INVALID");
    printf("currently having :%d",len);
  }
  else
  {
    p=root;
    while(i<loc)
    {
      p=p->link;
      i++;
    }
    temp=(struct node*)malloc(sizeof(struct node));
    printf("Enter the data:\n");
    scanf("%d",&temp->data);
    temp->link=NULL;
    temp->link=p->link;
    p->link=temp;
  }
}


void delete()
{
  struct node *temp;
  int loc,i=1;
  printf("Enter the delete Location:\n");
  scanf("%d",&loc);
  if(loc <= 0 || loc>length())
  {
    printf("INVALID\n");
  }
  else if(loc==1)
  {
    temp=root;
    root=temp->link;
    temp->link=NULL;
    free(temp);
  }
  else
  {
    struct node *p=root,*q;
    int i=1;
    while(i<loc-1)
    {
      p=p->link;
      i++;
    }
    q=p->link;
    q->link=NULL;
    free(q);
  }

}
