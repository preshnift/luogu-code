#include<iostream>
#include<cstdlib>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int num;
    int now=0;//输出的0和1
    int cnt=0;//当前行已有的数字
    while(cin>>num)
    {
        for(int i=0;i<num;i++)
        {
            cout<<now;
            cnt++;
            if(cnt==n)
            {
                cout<<endl;
                cnt=0;//换行重置
            }
        }
        now=1-now;//0-1的转换
    }
    system("pause");
}