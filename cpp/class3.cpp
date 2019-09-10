//23.member function return the value
#include<iostream>
#include<string.h>
using namespace std;
class a
{
    int a,b;
public:
    void getdata(int a,int b);
    void showdata();
    int big();
};
void a::getdata(int x,int y)
{
    a=x;
    b=y;
}
void a::showdata()
{
    cout<<"a="<<a<<endl<<"b="<<b<<endl;
}
int a::big()
{
    if(a>b)
    return a;
    else if(a<b)
    return b;
    else
    return 0;
}
int main()
{
    a e;
    e.getdata(10,11);
    e.showdata();
    int MAX=e.big();
    if(MAX==0)
    cout<<endl<<"EQUAL";
    else
    cout<<"MAX="<<MAX<<endl;
}
