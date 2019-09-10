//template part 2
#include<iostream>
using namespace std;
template <class t1,class t2>
float sum(t1 a,t2 b)
{
    return a+b;
}
int main()
{
    cout<<"INT SUM="<<sum(5,10)<<endl;
    cout<<"Float sum="<<sum(1.3,1.2)<<endl;
    cout<<"int + float sum="<<sum(13,1.2)<<endl;
    cout<<"Float + int sum="<<sum(1.3,12)<<endl;
}
