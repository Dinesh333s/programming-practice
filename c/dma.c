#include<stdio.h>
#include<stdlib.h>
struct emp
{
      int eno;
      char ename[20];
      float esal;
};
int main()
{
  struct emp *ptr;
  ptr=(struct emp*)malloc(sizeof(struct emp));
    if(ptr==NULL)
          {
          printf("Out of memory");
          }
            else
              {
                printf("enter datails:\n");
                scanf("%d%s%f",&ptr->eno,ptr->ename,&ptr->esal);
              }
   printf("%d %s %f",ptr->eno,ptr->ename,ptr->esal);

}
