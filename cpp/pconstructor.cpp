//parameterized constructor 
#include<iostream>
using namespace std;
class circle
{
float r;
public:
 circle()
 {
  r=5;
 }
 circle(float r)
 {
 this->r=r;
 }
 void show()
 {
 cout<<"AREA="<<3.14*r*r<<endl;
 }
};
int main()
{
circle c1;
c1.show();
circle c2(10);
c2.show();
}
