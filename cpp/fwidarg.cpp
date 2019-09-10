#include<iostream>
using namespace std;

float si(float x=1,float y=2,float z=3)
{
    return (x*y*z/100);
}
int main()
{
    cout<<"si="<<si(100,10,3)<<endl;
    cout<<"si="<<si(100,20)<<endl;
}
