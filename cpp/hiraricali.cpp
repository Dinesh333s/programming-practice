//Hierarical inheritance
#include<iostream>
using namespace std;
class account
{
int accno;
char accname[20];
public:
void geta()
{
 cout<<"Enter the AccNo and Acc Name:"<<endl;
 cin>>accno>>accname;
}
void puta()
{
    cout<<"ACCNO="<<accno<<endl;
    cout<<"ACC NAME="<<accname<<endl;
}
};
class savings:public account
{
   int bal;
public:
    void getb()
    {
        cout<<"enter u r amount"<<endl;
        cin>>bal;
        if(bal<500) cout<<" u have minimum amt"<<endl;
        else cout<<"u r account created"<<endl;
    }
};
class current:public account
{
   int bal;
public:
    void getc()
    {
        cin>>bal;
        if(bal<1000) cout<<" u have minimum amt"<<endl;
        else cout<<"u r account created"<<endl;
    }
};
int main()
{
    int op;
    cout<<"Enter the option"<<endl;
    cout<<"1.savings accout"<<endl<<"2.current accout"<<endl;
    cin>>op;
    switch(op)
    {
    case 1:savings s;
           s.geta();
           s.puta();
           s.getb();
           break;
    case 2: current c;
            c.geta();
            c.puta();
            c.getc();
            break;
    default:
        cout<<"INVALID CHOICE";
    }

}
