//42.static memeber function
//static data member
#include<iostream>
using namespace std;
class test
{
 static int a,b;
public:
 static void get(int x,int y)
 {
 if(x>y) cout<<"x big"<<endl;
 else if(y>x) cout<<"y is big"<<endl;
 else cout<<"both are equal"<<endl;
 }
};
int test::a,b;
int main()
{
test t;
t.get(10,20);
test::get(20,20);
}
