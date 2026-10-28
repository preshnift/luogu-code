#include<iostream>
#include<cstdlib>
bool vis[105]={};//判断这个数是否为相加后的数
int a[105];
using namespace std;
int main()
{
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(int j=0;j<n;j++)
    {
        for(int k=j+1;k<n;k++)
        {
            for(int i=0;i<n;i++)
            {
                if(a[i]==a[j]+a[k])
                {
                    vis[i]=true;//有多组数据，最终只加1
                }
            }
        }
    }
    int ans=0;
    for(int i=0;i<n;i++)
    {
        if(vis[i]) ans++;
    }
    cout<<ans<<endl;
    system("pause");
    return 0;
}