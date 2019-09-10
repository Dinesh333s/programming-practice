//24.passing a class object as a parameter
#include<iostream>
using namespace std;
class sample
{
 int a;
 public:
 void geta();
 void puta();
 void big(sample s2);
};
void sample::geta()
{
cin>>a;
}
void sample::puta()
{
cout<<"a="<<a<<endl;
}
void sample::big(sample s2)
{
if(a>s2.a)
cout<<"s1 is big";
else if(a<s2.a)
cout<<"s2 is big";
else
cout<<"equal";
}
int main()
{
sample s1,s2;
s1.geta();
s2.geta();
s1.puta();
s2.puta();
s1.big(s2);

}
