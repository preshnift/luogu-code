#include<iostream>
#include<cstdlib>
int a[3005],s[3005];
using namespace std;
int main()
{
    int n,m;
    cin>>n>>m;
    for(int i=1;i<=n;i++)
    {
        cin>>a[i];
        s[i]=s[i-1]+a[i];//前i个数之和
    }
    if(m==0)
    {
        cout<<0<<endl;
        return 0;
    }
    int mins=1e9;
    for(int i=m;i<n;i++)
    {
        int sum=s[i]-s[i-m];//连续m个数之和s[0]=0
        if(sum<mins) mins=sum;
    }
    cout<<mins<<endl;
    system("pause");
    return 0;
}