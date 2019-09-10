//Excetion Handling
#include<iostream>
using namespace std;
int main()
{
    int a,b;
    try
    {
        cout<<"Enter two numbers:"<<endl;
        cin>>a>>b;
        if(b==0) throw 0;
        else cout<<"DIVISON="<<a/b;
    }
    catch(int x)
    {
        cout<<"DIVISON NOT poissible...."<<endl;
    }
}
