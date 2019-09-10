//virtual destructor
#include<iostream>
using namespace std;
class a
{
public:
    a()
    {
        cout<<"a constructor"<<endl;
    }

    virtual int sum(int a, int b){
        cout<<"as sum"<<endl;
        return a+b;
    }
    ~a()
    {
        cout<<"a destructor"<<endl;
    }
};
class b:public a
{
public:
    b()
    {
        cout<<"b constructor"<<endl;
    }

    int sum(int i, int j){
        a::sum(i, j);
        cout<<"bs sum"<<endl;
        return i-j;
    }

    ~b()
    {
        cout<<"b destructor"<<endl;
    }
};
int main()
{
    a *o=new b;
    cout<<o->sum(1,2)<<endl;
    delete o;
}
