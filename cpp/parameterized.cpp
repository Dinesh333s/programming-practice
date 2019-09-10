//parameterized constructor  in inheritance
#include<iostream>
#include<string.h>
using namespace std;
class student
{
  int id;
  char name[20],course[20];
public:
  student()
  {}
    student(int id,char name[20],char course[20])
    {
      this->id=id;
      strcpy(this->name,name);
      strcpy(this->course,course);
    }
    void showa()
    {
      cout<<"ID="<<id<<endl;
      cout<<"NAME="<<name<<endl;
      cout<<"COURSE="<<course<<endl;
    }
  };
class marks:public student
  {
    int m,p,c;
  public:
    marks(int id,char name[20],char course[20],int m,int p,int c):student(id,name,course)
    {

      this->m=m;
      this->p=p;
      this->c=c;
    }
    void showb()
    {
      cout<<"MATHS="<<m<<" "<<"PHYSICS="<<p<<" "<<"CHEMISTRY="<<c<<endl;
    }
  };
  int main()
  {
    marks m(101,"dinesh","cpp",10,20,30);
    m.showa();
    m.showb();
  }
