//29)add the 2 class variable store another class variable
#include<iostream>
using namespace std;
class test
{
    int a,b;
public:
    void getdata();
    void putdata();
    test sum(test);

};
void test::getdata()
{
    cin>>a>>b;
}
void test::putdata()
{
    cout<<"a="<<a<<endl<<"b="<<b<<endl;
}
test test::sum(test t2)
{
    test t3;
    t3.a=a+t2.a;
    t3.b=b+t2.b;
    return t3;
}


int main()
{
    test t1,t2,t3;
    t1.getdata();
    t2.getdata();
    t3=t1.sum(t2);
    cout<<"SUM is:"<<endl;
    t3.putdata();

}
