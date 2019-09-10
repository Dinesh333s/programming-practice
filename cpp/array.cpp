//28
#include<iostream>
using namespace std;
class student
{
    int id,sub[6];
    char name[20];
public:
    void getdata();
    void result();
    // void output();
};
void student::getdata()
{
    cout<<"enter the DATA:"<<endl;
    cin>>id>>name;
    for(int i=0;i<6;i++)
    cin>>sub[i];
}
void student::result()
{
    int tot=0;
    float avg;
    for(int i=0;i<6;i++)
    tot=tot+sub[i];
    avg=tot/6.0;
    cout<<"total:"<<tot<<endl;
    cout<<"Average:"<<avg<<endl;
    cout<<"OVERALL:";
    for(int i=0;i<6;i++)
    if(sub[i]<35)
    {
        cout<<"FAIL";
        //goto last;
    }
    cout<<"PASS";

}
void output()
{
    cout<<"tesss";
}
int main()
{
    student s;
    s.getdata();
    s.result();
    output();
}
