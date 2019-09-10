//templates in ARRAY
#include<iostream>
using namespace std;
template <class t>
t sum(t a[],int size)
{
    t s=0;
    for(int i=0;i<size;i++)
    {
        s=s+a[i];
    }
    return s;
}
int main()
{
    int x[5]={1,2,3,4,5};
    float y[3]={1.1,2.2,3.3};
    cout<<"INT array sum="<<sum(x,5)<<endl;
    cout<<"Float sum="<<sum(y,3);
}
