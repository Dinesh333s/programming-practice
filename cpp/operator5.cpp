//overloading using insertion and extraction
//operator >> and <<
#include<iostream>
using namespace std;
class student
{
    int id;
    char name[20];
public:
    friend void operator>>(istream &in,student &s)
    {
        in>>s.id>>s.name;
    }
    friend void operator<<(ostream &out,student &s)
    {
        out<<"id="<<s.id<<endl;
        out<<"name="<<s.name<<endl;
    }
};
int main()
{
    student s;
    cin>>s;
    cout<<s;
}
//NOTE: in operator overloading we can define friend function inside or outside a class
