//22.passing the argument to function
#include<iostream>
#include<string.h>
using namespace std;
class emp
{
    int ID;
    char NAME[20];
    float s;
public:
    void getemp(int id,char name[20],float s1);
    void showdata();
};
void emp::getemp(int id,char name[20],float s1)
{
    ID=id;
    strcpy(NAME,name);
    s=s1;
}
void emp::showdata()
{
    cout<<"id="<<ID<<endl<<"name="<<NAME<<endl<<"sal="<<s;
}
int main()
{
    emp e;
    e.getemp(100,"dinesh",12500);
    e.showdata();
}
