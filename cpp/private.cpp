//Access the private member function
#include<iostream>
using namespace std;
class emp
{
private:
int id;
char name[20];
float sal;
void getdata()
{
cout<<"ENTER the data:";
cin>>id>>name>>sal;
}
public:
  void showdata()
  {
  getdata();
  cout<<"ID="<<id<<endl<<"name="<<name<<endl<<"salary="<<sal;
  }
};
int main()
{
emp e;
e.showdata();
}
