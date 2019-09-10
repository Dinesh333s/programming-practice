//virtual function in inheritance
#include<iostream>
using namespace std;
class a
{
public:
    void afun()
    {
        cout<<"a function"<<endl;
    }
};
class b:virtual public a
{
public:
    void bfun()
    {
        cout<<"b function"<<endl;
    }
};
class c:virtual public a
{
public:
    void cfun()
    {
        cout<<"c function"<<endl;
    }
};
class d:public b,public c
{
public:
    void dfun()
    {
        cout<<"d function"<<endl;
    }
};
int main()
{
    d o;
    o.afun();
    o.bfun();
    o.cfun();
    o.dfun();
}
