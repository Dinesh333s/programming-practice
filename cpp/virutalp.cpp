//pure virtual function and abstract class
#include<iostream>
using namespace std;
class shape //abstract class
{
protected:
    float d1,d2;
public:
    void dim()
    {
        cin>>d1>>d2;
    }
    virtual float area()=0; //pure virtual function
};
class rectangle:public shape
{
public:
    float area()
    {
        return d1*d2;
    }
};
class triangle:public shape
{
public:
    float area()
    {
        return 0.5*d1*d2;
    }
};
int main()
{
    rectangle r;
    cout<<"enter the length and breath:"<<endl;
    r.dim();
    cout<<"AREA="<<r.area()<<endl;
    triangle t;
    cout<<"enter the base and height:"<<endl;
    t.dim();
    cout<<"AREA="<<t.area()<<endl;
}
