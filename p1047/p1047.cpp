#include<iostream>
#include<cstdlib>
int a[10005];
using namespace std;
int main()
{
    int l,m;//l是马路长度，m为区域数量
    cin>>l >>m;
    for(int i=0;i<=l;i++)
    {
        a[i]=1;//全部初始化为1
    }
    for(int i=0;i<m;i++)
    {
        int sd,ed;
        cin>>sd >>ed;
        for(int i=sd;i<=ed;i++)
        {
            a[i]=0;
        }
    }
    int ans=0;
    for(int i=0;i<=l;i++)
    {
        if(a[i]==1) ans++;
    }
    cout<<ans;
    system("pause");
    return 0;

}