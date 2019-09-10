//class outside member function declaration
#include<iostream>
using namespace std;
class student
{
    int id;
    char name[20];
public:
    void readdata();//fun declartion
};
void student :: readdata()//outside declaration
{
    cin>>id>>name;
    cout<<"ID="<<id<<endl<<"NAME="<<name;
}
int main()
{
    student s;//variable of class type
    s.readdata();//fun calling

}
