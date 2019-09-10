//example-2 parameterized constructor overloading
#include<iostream>
#include<string.h>
using namespace std;
class student
{
char name[20],course[20];
float fee;
public:
student(char name[20],char course[20])
{
  strcpy(this->name,name);
  strcpy(this->course,course);
  fee=0;
 }
 student(char name[20],char course[20],float fee)
 {
 student::student(char name[20],char course[20]);
 this->fee=fee;
 }
 void show()
 {
 cout<<"NAME:"<<name<<endl<<"COURSE:"<<course<<endl<<"FEES:"<<fee<<endl;
 }
};
int main()
{
student s1("Dinesh","C++");
student s2("Daniel","python",23000);
s1.show();
s2.show();
}
