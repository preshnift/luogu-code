#include<iostream>
#include<cstdlib>
#include<cmath>
using namespace std;
int main()
{
    int n,t;//进行n次操作
    cin>>n;
    double a;
    int ans=0,x;
    for(int i=0;i<n;i++)
    {
        cin>>a>>t;
        for(int j=1;j<=t;j++)
        {
            x=(int)floor(a*j);//floor向下取整，(int)强制转换为整型
            ans^=x;//异或，出现偶次消去，出现奇次留下->由题目保证只有一盏灯是开着的
        }
    }
    cout<<ans;
    system("pause");
    return 0;
}