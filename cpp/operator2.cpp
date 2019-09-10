//overloading + operator
//adding two string using +
#include<iostream>
#include<string.h>
using namespace std;
class test1
{
    char name[20];
public:
    void get()
    {
        cin>>name;
    }
    void show()
    {
        cout<<"NAME:"<<name<<endl;
    }
    test1 operator+(test1 t2)
    {
        test1 t3;
        strcpy(t3.name,name);
        strcat(t3.name," ");
        strcat(t3.name,t2.name);
        return t3;
    }
};
int main()
{
    test1 t1,t2,t3;
    t1.get();
    t2.get();
    t3=t1+t2;
    t3.show();
}
