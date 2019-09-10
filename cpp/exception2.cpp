//Excetion Handling part3
#include<iostream>
using namespace std;
int main()
{

    try
    {
        cout<<"Before throw"<<endl;
        throw 'A';
    }
    catch(...)
    {
        cout<<"Exception catched"<<endl;
    }

}
