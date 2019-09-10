#include<iomanip>
#include<iostream>
#include<ios>
using namespace std;
int main()
{
  cout<<setfill('*');
  cout<<setw(5)<<1<<endl;
  cout<<setw(6)<<10<<endl;
  cout<<setfill(' ');
  cout<<setw(5)<<100<<endl;
  cout<<setprecision(3)<<22/7.0<<endl; //set setprecision works
  cout<<setbase(8)<<65<<endl;
  cout<<setbase(16)<<65<<endl;
  cout<<setbase(10)<<0x41<<endl;
  cout<<setw(10)<<setiosflags(ios::right)<<"Dinesh"<<endl;
  cout<<setw(10)<<setiosflags(ios::left)<<"Da"<<endl;
  cout<<setiosflags(ios::showpoint)<<22/7<<endl;
  cout<<setiosflags(ios::showpos)<<100<<endl;
  cout<<setiosflags(ios::oct)<<65<<endl;
  cout<<setiosflags(ios::hex)<<65<<endl;
  cout<<setiosflags(ios::dec)<<0101<<endl;
  cout<<setiosflags(ios::scientific)<<234.12345<<endl;
  cout<<setiosflags(ios::fixed)<<234.55<<endl;
  return 0;
}
