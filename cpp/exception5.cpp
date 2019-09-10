//Excetion Handling part3
#include<iostream>
using namespace std;
int main()
{

    try
    {
        try
        {
            cout<<"inner try block\n";
            throw 10;

        }
        catch(int x)
        {
            cout<<"throw working"<<endl;
            throw x;
        }
    }
    catch(int y)
    {
        cout<<"outer try block";
    }

}
