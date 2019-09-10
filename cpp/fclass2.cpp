//friend class using object
#include<iostream>
using namespace std;
class gomesh//container class
{
 char aname[20];
 friend class ganesh;
};

class ganesh //contained class
{
  char bname[20];
  float price;
  gomesh g1; //composition
public:
  void getgomesh()
  {
   cout<<"ENTER AUTHOR name:"<<endl;
   cin>>g1.aname;
   cout<<"enter the BOOK name"<<endl;
   cin>>bname;
   cout<<"enter Price:";
   cin>>price;
  }
public:
  void showgomesh()
  {
   cout<<"Aname="<<g1.aname<<endl<<"Bname="<<bname<<endl<<"Price="<<price;
  }
};
int main()
{
 ganesh g2;
 g2.getgomesh();
 g2.showgomesh();
}
