//operator overloading using friend function
//operator > unary operator
#include<iostream>
using namespace std;
class test2;
class test1
{
    int a;
public:
    void get()
    {
        cin>>a;
    }
    friend void operator >(test1,test2);
};
class test2
{
    int b;
public:
    void get()
    {
        cin>>b;
    }
    friend void operator >(test1,test2);
};
void operator >(test1 t1,test2 t2)
{
    t1.a>t2.b?cout<<"a big":cout<<"b big";
}
int main()
{
    test1 t1;
    test2 t2;
    t1.get();
    t2.get();
    t1>t2;
}
