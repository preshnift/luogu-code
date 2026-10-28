#include<iostream>
#include<cstdio>
#include<cstdlib>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[10][10]={0};
    int dx[4]={0,1,0,-1};//决定上下
    int dy[4]={1,0,-1,0};//决定左右
    int dir=0;//dir=0时向右
    int x=1,y=1;
    //dir=1时向下
    //dir=2时向左
    //dir=3时向上
    //dir=4时享有
    for(int num=1;num<=n*n;num++)
    {
        a[x][y]=num;
        int nx=x+dx[dir];
        int ny=y+dy[dir];
        if(nx<1 ||nx>n ||ny<1 || ny>n ||a[nx][ny]!=0)
        {
            dir=(dir+1)%4;//当取到一个循环时返回0
            nx=x+dx[dir];//重新计算下一个坐标
            ny=y+dy[dir];
        }
        x=nx;
        y=ny;
    }
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n;j++)
        {
            printf("%3d",a[i][j]);//自动占三个字符，前面用空格补位
        }
        cout<<endl;
    }
    system("pause");

}