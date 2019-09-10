//multiple inheritance
#include<iostream>
using namespace std;
class a //base class
{
int id;
char name[20];
public:
 void geta()
 {
 cout<<"enter id and name:"<<endl;
 cin>>id>>name;
 }
 void puta()
 {
 cout<<"ID="<<id<<endl<<"NAME="<<name<<endl;
 }
};
class b //base class
{
protected:
 int m1,m2,m3;
protected:
 void getb()
 {
 cout<<"enter marks:"<<endl;
 cin>>m1>>m2>>m3;
 }
 void putb()
 {
 cout<<"M1="<<m1<<endl;
 cout<<"M2="<<m2<<endl;
 cout<<"M3="<<m3<<endl;
 }

};
class c:public a,public b //derived class
{
int tot;
float avg;
protected:
void show()
{
    tot=m1+m2+m3;
    avg=tot/3.0;
 cout<<"TOTAL="<<tot<<endl;
 cout<<"Average="<<avg<<endl;
}
};
int main()
{
c s;
s.geta();
s.getb();
s.puta();
s.putb();
s.show();
}
