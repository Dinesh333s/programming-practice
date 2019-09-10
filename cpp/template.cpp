//templates in cpp
#include<iostream>
using namespace std;
template <class t>
t sum(t a,t b)
{
    return a+b;
}
int main()
{
    cout<<"INT SUM="<<sum(5,10)<<endl;
    cout<<"Float sum="<<sum(1.3,1.2);
}
