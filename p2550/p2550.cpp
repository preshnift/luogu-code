#include<iostream>
#include<cstdlib>
bool win[35];
int ans[8];
using namespace std;
int main()
{
    int n;
    cin>>n;//彩票章数
    for(int i=1;i<=7;i++)
    {
        int x;
        cin>>x;
        win[x]=true;
    }
    for(int i=1;i<=n;i++)
    {
        int cnt=0;//中奖号码个数
        for(int j=1;j<=7;j++)
        {
            int num;
            cin>>num;
            if(win[num]) cnt++;
            
        }
        ans[cnt]++;
    }
    cout<<ans[7]<<" ";
    cout<<ans[6]<<" ";
    cout<<ans[5]<<" ";
    cout<<ans[4]<<" ";
    cout<<ans[3]<<" ";
    cout<<ans[2]<<" ";
    cout<<ans[1]<<endl;
    system("pause");
    return 0;
}