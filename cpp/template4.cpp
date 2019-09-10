//overloading the templates
#include<iostream>
using namespace std;
template <class t>
t sum(t a,t b)
{
    return a+b;
}
template <class t>
t sum(t a,t b,t c)
{
    return a+b+c;
}
int main()
{
    cout<<" two INT SUM="<<sum(5,10)<<endl;
    cout<<" two Float sum="<<sum(1.3,1.2)<<endl;
    cout<<"three int sum="<<sum(1,2,3)<<endl;
    cout<<"three float sum"<<sum(1.1,1.2,1.3);
}
