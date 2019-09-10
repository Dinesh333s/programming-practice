//array of object
#include<iostream>
using namespace std;
class student
{
    int id;
    char name[20];
public:
    void getdata();
    void putdata();
};
void student::getdata()
{
    cin>>id>>name;
}
void student::putdata()
{
    cout<<id<<"\t"<<name<<endl;
}
int main()
{
    student s[60];
    int n;
    cin>>n;
    if(n>60||n<0);
    else
    {
        for(int i=0;i<n;i++)
        s[i].getdata();
        cout<<"id"<<"\t"<<"name"<<endl;
        cout<<"-----------------------------------"<<endl;
        for(int i=0;i<n;i++)
        s[i].putdata();

    }
}
