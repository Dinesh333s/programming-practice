//single inheritance
#include<iostream>
using namespace std;
class a //base class
{
private:
    int id;
    char name[20];
public:
    void geta()
    {
        cin>>id>>name;
    }
    void puta()
    {
        cout<<"ID="<<id<<endl<<"Name="<<name<<endl;
    }
};
class b:public a //derived class
{
    float H,W;
public:
    void getb()
    {
        cin>>H>>W;
    }
    void putb()
    {
        cout<<"HEIGHT="<<H<<endl;
        cout<<"WEIGHT="<<W<<endl;
    }
};
int main()
{
    b b1;
    b1.geta();
    b1.getb();
    b1.puta();
    b1.putb();
}
