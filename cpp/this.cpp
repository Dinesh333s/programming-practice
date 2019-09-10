//This pointer
#include<iostream>
using namespace std;
class test
{
int a,b;
public:
void getdata(int a,int b)//int that situation we can use THIS POINTER
{
 this->a=a;
 this->b=b;
}
void display()
{
cout<<"a="<<a<<endl<<"b="<<b<<endl;
cout<<"test address="<<this<<endl;
cout<<"a address="<<this<<endl;
cout<<"b address="<<this<<endl;

}
};
int main()
{
  test t;
  t.getdata(10,20);
  t.display();
}
