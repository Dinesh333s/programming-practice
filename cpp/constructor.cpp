//constructor --->default constructor
#include<iostream>
using namespace std;

class test
 {
 int a,b;
 public:

   test()   //default user defined constructor
   {
   a=10;
   b=20;
   }
   void show()
   {
   cout<<"a="<<a<<endl<<"b="<<b;
   }
 };
 int main()
 {
   test t;
   t.show();
   
 }
