//friend function
#include<iostream>
using namespace std;
class sample
{
    int a,b,c;
    friend void add(sample);
};
void add(sample s)
{
    s.a=10;
    s.b=20;
    s.c=s.a+s.b;
    cout<<"a="<<s.a<<endl;
    cout<<"b="<<s.b<<endl;
    cout<<"c="<<s.c;

}
int main()
{
    sample s;
    add(s);
}
