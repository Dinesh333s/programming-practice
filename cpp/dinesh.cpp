#include<iostream>
using namespace std;
int main()
{
    int i,j,count;
    char str[100],temp;
    cin >> str;
    for(i=0; str[i]!='\0';)
    {
        temp = str[i];
        for(j=i,count=0; str[j]==temp && str[j]; j++,count++);
        cout << temp << count;
        i = j;
    }
}