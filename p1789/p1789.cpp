#include<iostream>
#include<cmath>
#include<cstdlib>
int light[105][105]={0};
bool block[105][105]={false};
using namespace std;
int main()
{
    int n,m,k;//m为火把，k为萤石可为0
    cin>>n>>m>>k;
    for(int i=1;i<=m;i++)//执行m次火把
    {
        int x,y;//记录火把坐标
        cin>>x>>y;
        block[x][y]=true;
        for(int dx=-2;dx<=2;dx++)
        {
            for(int dy=-2;dy<=2;dy++)
            {
                int nx=x+dx;
                int ny=y+dy;
                if(nx<1 ||nx>n ||ny<1 || ny>n) continue;
                if( abs(dx)+abs(dy)<=2 )//离火把中心的距离
                {
                    light[nx][ny]=1;
                }
            }
        }
    }
    for(int i=0;i<k;i++)
    {
        int x,y;
        cin>>x>>y;
        block[x][y]=true;
        for(int dx=-2;dx<=2;dx++)
        {
            for(int dy=-2;dy<=2;dy++)
            {
                int nx=x+dx;
                int ny=y+dy;
                if(nx<1 || nx>n |ny<1 ||ny>n) continue;
                light[nx][ny]=1;
            }
        }
    }
    int ans=0;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n;j++)
        {
            if(light[i][j]==0 && block[i][j]==false)
                ans++;
        }
    }
    cout<<ans<<endl;
    system("pause");
    return 0;
}