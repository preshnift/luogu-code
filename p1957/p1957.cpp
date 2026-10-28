#include<iostream>
#include<cstdlib>
#include<string>
using namespace std;
int main()
{
    int n;
    cin>>n;
    char op;//a,b,c字符
    char symbol;//符号
    for(int k=1;k<=n;k++)
    {
        if(cin.peek()>='a' && cin.peek()<'d')//偷看输入在缓冲区的，但不读走
        {
            int x,y;
            cin>>op>>x>>y;
            if(op=='a') symbol='+';
            else if(op=='b') symbol='-';
            else if(op=='c') symbol='*';
            int res;
            if(symbol=='+') res=x+y;
            else if(symbol=='-') res=x-y;
            else if(symbol=='*') res=x*y;
            string s;
            s=to_string(x)+symbol+to_string(y)+'='+to_string(res);//to_string将数字x变成字符串
            cout<<s<<endl;
            cout<<s.size()<<endl;//s.size()直接获取字符串长度
        }
        else
        {
            int x,y;
            cin>>x>>y;
            int res;
            string s;
            if(symbol=='+') res=x+y;
            else if(symbol=='-') res=x-y;
            else if(symbol=='*') res=x*y;
            s=to_string(x)+symbol+to_string(y)+'='+to_string(res);
            cout<<s<<endl;
            cout<<s.size()<<endl;
        }
    }
    system("pause");
    return 0;
}