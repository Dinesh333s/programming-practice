//copy constructor
#include<iostream>
using namespace std;
class sample
{
    int a,b;
public:
    sample(int a,int b)
    {
        this->a=a;
        this->b=b;
    }
    sample(sample &old)
    {
        a=old.a;
        b=old.b;
    }
    void show()
    {
        cout<<"a="<<a<<endl<<"b="<<b<<endl;
    }
};
int main()
{
    sample s1(10,20);
    sample s2(s1);
    s1.show();
    s2.show();
}
