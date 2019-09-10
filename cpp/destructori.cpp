//default destructor in inheritance
#include<iostream>
using namespace std;
class a
{
public:
    ~a()
    {
        cout<<"base class constructor"<<endl;
    }
};
class b:public a
{
public:
    ~b()
    {
        cout<<"derived class constructor"<<endl;
    }
};
int main()
{
    b o;
}
