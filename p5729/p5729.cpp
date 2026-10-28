#include<iostream>
#include<cmath>
#include<cstdlib>
bool vis[21][21][21]={false};//标记为未蒸发
//三位数组标记空间很小，直接暴力
using namespace std;
int main()
{
    int w,x,h;
    cin>>w>>x>>h;
    int sum=0;
    sum=w*x*h;
    int q;
    cin>>q;
    while(q--)
    {
        int x1,y1,z1,x2,y2,z2;
        cin>>x1>>y1>>z1>>x2>>y2>>z2;
        for(int i=x1;i<=x2;i++)
        {
            for(int j=y1;j<=y2;j++)
            {
                for(int k=z1;k<=z2;k++)
                {
                    vis[i][j][k] = true;//均为蒸发
                }
            }
        }
    }
    int ans=0;
    for(int i=1;i<=w;i++)
    {
        for(int j=1;j<=x;j++)
        {
            for(int k=1;k<=h;k++)
            {
                if(vis[i][j][k])
                {
                    ans++;
                }
            }
        }
    }//扫描被蒸发的
    cout<<sum-ans;
    system("pause");
    return 0;
}