//static member 2
#include<iostream>
using namespace std;
class test1
{
    static int count;
public:
    test1()
    {
        count++;
        cout<<count<<"is created"<<endl;
    }
    ~test1()
    {
        cout<<count<<"is deleted"<<endl;
        count--;
    }
};
int test1::count;
int main()
{
    test1 t1,t2,t3;
}
