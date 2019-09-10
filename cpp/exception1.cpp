//Excetion Handling part2
#include<iostream>
using namespace std;
int main()
{

    try
    {
        cout<<"Before throw"<<endl;
        throw 1;
        cout<<"after throw"<<endl;

    }
    catch(int x)
    {
        cout<<x<<"is printed"<<endl;
    }
    cout<<"thank you";
}
