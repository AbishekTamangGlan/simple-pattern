#include<iostream>
using namespace std;
int main()
{
    int i,j,row,column;
    cin>>row>>column;
    for(i=1;i<=row;i++)
    {
        for(j=1;j<=column;j++)
        {
            cout<<"*";       
             }
             cout<<endl;
    }
    return 0;
}
