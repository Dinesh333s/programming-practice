//operator overloading
#include<iostream>
using namespace std;
class test1
{
  int a;
  public:
  void get()
  {
   cin>>a;
  }
  void operator==(test1 t2)
  {
  if(a==t2.a) cout<<"equal";
   else cout<<"not equal";
  }
};
int main()
{
test1 t1,t2;
t1.get();
t2.get();
t1==t2;
}
