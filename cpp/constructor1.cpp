//constructor with default argument
#include<iostream>
using namespace std;
class test
{
    int a,b,c;
public:
    test(int x=1,int y=2,int z=3)
    {
        a=x;b=y;c=z;
    }
    void show()
    {
        cout<<"a="<<a<<endl<<"b="<<b<<endl<<"c="<<c<<endl;
    }
};
int main()
{
    test t1(10,20,30);
    test t2(10,20);
    test t3(10);
    test t4;
    t1.show();
    t2.show();
    t3.show();
    t4.show();

}
