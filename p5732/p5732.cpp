#include<iostream>
#include<cstdlib>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[21][21]={0};
    for(int i=1;i<=n;i++)
    {
        a[i][1]=1;
        a[i][i]=1;
        for(int j=2;j<i;j++)
        {
            a[i][j]=a[i-1][j-1]+a[i-1][j];
        }

    }
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=i;j++)
        {
            cout<<a[i][j];
            if(j<i) cout<<" ";
        }
        cout<<endl;
    }
    system("pause");
    return 0;
}