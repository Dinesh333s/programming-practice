//struct declartion
#include<stdio.h>
int main()
{
    struct std
    {
        char sname[10];
        int sno;
        float stol;
        struct avg
        {
            int s1,s2,s3;

        }a;
    };


struct std s;
scanf("%s",s.sname);
scanf("%d",&s.sno);
scanf("%d%d%d",&s.a.s1,&s.a.s2,&s.a.s3);
s.stol=(s.a.s1+s.a.s2+s.a.s3)/3;

printf("%s \n %d \n %f",s.sname,s.sno,s.stol);
}
