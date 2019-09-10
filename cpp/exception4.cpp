//Excetion Handling part4
#include<iostream>
using namespace std;
class a
{
public:
    a()
    {
        cout<<"im a constructor:"<<endl;
    }
    ~a()
    {
        cout<<"im a destructor:"<<endl;
    }
};
int main()
{

    try
    {
        cout<<"Welcome to Exception Handling...."<<endl;
        a o;
        throw 10;
        cout<<"after the throw:";
    }
    catch(...)
    {
        cout<<"thank you"<<endl;
    }


}
