//friend class using class
#include<iostream>
using namespace std;
class name1 //container class
{
    int a,b;

public:

    void getdata()
    {
        cout<<"enter a,b:";
        cin>>a>>b;
    }
    friend class name2;
};
class name2 //contained class
{
public:
    void putdata(name1 n1)
    {
        cout<<"a = "<<n1.a<<endl;
        cout<<"b = "<<n1.b;
    }
};
int main()
{
    name1 n1;
    name2 n2;
    n1.getdata();
    n2.putdata(n1);
}
