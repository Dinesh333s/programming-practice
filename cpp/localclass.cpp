//local class
#include<iostream>
using namespace std;
static int x=200;
void fun()
{
    class a
    {
        int x;
    public:
        void geta()
        {
            x=100;
            cout<<"local x="<<x<<endl;
            cout<<"global x="<<::x;
        }
    };
    a o;
    o.geta();
}
int main()
{
    fun();
}
