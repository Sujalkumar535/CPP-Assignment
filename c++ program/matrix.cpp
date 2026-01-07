#include<iostream>
using namespace std;
int main()
{
    int a[3][3],b[3][3],sum[3][3],i,j,row,col;
    cout<<"enter the number of row amd coloumn";
    cin>>row>>col;
    cout<<"enter the elements of first matrix";
    for(i=0;i<row;i++)
    {
        for(j=0;j<3;j++)
        {
            cin>>a[i][j];
        }
    }
    cout<<"enter the elements of second matrix";
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            cin>>b[i][j];
        }
    }
    cout<<"sum of two matrices is";
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            sum[i][j]=a[i][j]+b[i][j];
            cout<<sum[i][j]<<" ";
        }
        cout<<endl;
    }
}