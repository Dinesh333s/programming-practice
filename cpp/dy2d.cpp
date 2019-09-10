#include<iostream>
using namespace std;
int main()
{
    int **p,row,col,i,j;
    cout<<"ENTER THE ARRAY ROW AND COLUMN: "<<endl;
    cin>>row;
    cin>>col;

    p=new int*[row];
    for(i=0;i<row;i++)
    p[i]=new int[col];

    cout<<"ENTER"<<row*col<<"ELEMENT"<<endl;
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            cin>>p[i][j];
        }
    }
    cout<<"ARRAY ELEMENTS ARE:"<<endl;
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            cout<<p[i][j]<<" ";
        }
        cout<<endl;
    }
    delete p;
}
