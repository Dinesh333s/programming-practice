#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"ENTER THE ARRAY SIZE:"<<endl;
    cin>>n;
    int *p;
    p=new int[10];
    for(int i=0;i<n;i++)
    cin>>p[i];

    for(int j=0;j<n;j++)
    cout<<p[j]<<endl;
    delete p;
}
