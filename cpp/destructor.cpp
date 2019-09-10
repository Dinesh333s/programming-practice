//destructor
#include<iostream>
using namespace std;
class sample
{
    int a,b;
public:
    sample()
    {
        a=20;
        b=30;
    }
    ~sample()   //destructor
    {
        cout<<"A="<<a<<endl;
        cout<<"B="<<b;
    }
};
int main()
{
    sample s;
}
