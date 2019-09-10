//unary operator ++ and --
//operator overloading
#include<iostream>
using namespace std;
class test
{
  int a;
public:
  void get()
  {
    cin>>a;
  }
  void put()
  {
    cout<<"a="<<a<<endl;
  }
  void operator ++()
  {
    a++;
  }
  void operator --()
  {
    a--;
  }

};
int main()
{
  test t;
  t.get();
  ++t;
  t.put();
  --t;
  t.put();
}
