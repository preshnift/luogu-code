#include<iostream>
#include<cstdlib>
using namespace std;
bool isRun(int n)
{
    if(n%400 == 0 || n%4 == 0 && n%100 !=0 )
    {
        return true;
    }
    return false;
}
int main()
{
    //起始年份
    int x;
    cin>>x;
    //结束年份
    int y;
    cin>>y;
    int cnt=0;
    for(int i=x;i<=y;i++)
    {
        if(isRun(i)) 
        {
            cnt++;
        }
    }
    cout<<cnt<<endl;
    for(int i=x;i<=y;i++)
    {
        if(isRun(i)) 
        {
            cout<<i<<" ";
        }
    }
    system("pause");
}