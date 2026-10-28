#include<iostream>
using namespace std;
int a[100];
int main()
{
    int n;
    cin>>n;
    int x=0;
    a[x]=n;
    for(int i=0;n!=1;i++)
    {
        if(n%2==1) n=n*3+1;
        else n=n/2;
        x++;
        a[x]=n;
    }
    for(int i=x;i>=0;i--)
        cout<<a[i]<<" ";
    system("pause");
    return 0;
}