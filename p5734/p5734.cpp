#include<iostream>
#include<cstdlib>
#include<string>
using namespace std;
int main()
{ 
    int q;
    cin>>q;//表示操作次数
    string s;
    cin>>s;//最开始的字符串
    for(int i=1;i<=q;i++)
    {
        int x;
        cin>>x;
        if(x==1)
        {
            string s1;
            cin>>s1;
            s=s+s1;
            cout<<s<<endl;
        }
        else if(x==2)
        {
            int a,b;
            cin>>a>>b;
            s=s.substr(a,b);//从位置a到b提取字符串
            cout<<s<<endl;
        }
        else if(x==3)
        {
            int a;
            cin>>a;
            string s1;
            cin>>s1;
            s.insert(a,s1);//从a位置插入字符串
            cout<<s<<endl;
            
        }
        else if(x==4)
        {
            string str;
            cin>>str;
            int pos=s.find(str);//查找字串，pos为字串的第一个下标
            if(pos == string::npos)
            {
                cout<<-1<<endl;
            }
            else
            {
                cout<<pos<<endl;
            }
        }
    }
    system("pause");
}