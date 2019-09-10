//hybrid inheritance
#include<iostream>
using namespace std;
class a
{
  int id;
  char name[20];
public:
  void geta()
  {
    cout<<"Enter the id and Name:";
    cin>>id>>name;
  }
};
class b:public a
{
protected:
  int m1,m2,m3;
public:
  void getb()
  {
    cout<<"Enter 3 subject MARKS:"<<endl;
    cin>>m1>>m2>>m3;
  }
};
class c
{
protected:
  int spm;   //sports mark
public:
  void getc()
  {
    cout<<"Enter sports mark:"<<endl;
    cin>>spm;
  }
};
class result:public b,public c
{
  int tot;
  int avg;
public:
  void getshow()
  {
    tot=m1+m2+m3;
    avg=tot/3.0;
    cout<<"TOTAL="<<tot<<endl;
    cout<<"Average="<<avg<<endl;
    cout<<"SPORTS + SUBJECT ="<<spm + avg<<endl;
  }
};
int main()
{
  result r;
  r.geta();
  r.getb();
  r.getc();
  r.getshow();
}
