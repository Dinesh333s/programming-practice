//const member function
#include<iostream>
using namespace std;
class test1
{
    int a,b;
public:
    const void get()  //modifier
    {
        a=10;
        b=20;
    }
    void show() //accessor
    {
        a=30;
        b=40;
        cout<<"a="<<a<<endl<<"b="<<b<<endl;
    }
};
int main()
{
    test1 t;
    t.get();
    t.show();
}
