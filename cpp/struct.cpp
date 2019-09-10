#include<iostream>
using namespace std;
struct student
{
int id;
char name[20];

void getdata()
{
cout<<"ENTER THE id and NAME:";
cin>>id>>name;
cout<<"ID="<<id<<endl;
cout<<"NAME="<<name;
}
}s;

int main()
{
 s.getdata();
return 0;
}
