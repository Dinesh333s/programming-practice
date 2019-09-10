//call by reference using reference datatype
#include<iostream>
using namespace std;
int main()
{
    int a,b;
    cin>>a>>b;
    swap(a,b);
    cout<<"a="<<a<<endl<<"b="<<b;
}
void swap(int &a,int &b) // & called reerence datatype
{
    int temp;
    temp=a;
    a=b;
    b=temp;
}
