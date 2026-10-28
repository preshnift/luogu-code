#include<iostream>
#include<cstdlib>
int cnt[80];//骰子数值最大之和
using namespace std;
int main()
{
    int a,b,c;
    cin>>a>>b>>c;
    int sum=0;
    for(int i=1;i<=a;i++)
    {
        for(int j=1;j<=b;j++)
        {
            for(int k=1;k<=c;k++)
            {
                sum=i+j+k;//骰子面数之和
                cnt[sum]++;//将每次数值放入数组累计个数
            }
        }
    }
    int max_time=0;
    int ans=0;
    for(int i=3;i<=a+b+c;i++)
    {
        if(cnt[i]>max_time)
        {
            max_time=cnt[i];
            ans=i;
        }
    }
    cout<<ans<<endl;
    system("pause");
    return 0;
}