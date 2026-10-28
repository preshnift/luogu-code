#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main()
{
    string s;
    int cnt[26]={0};
    for(int i=0;i<4;i++)
    {
        getline(cin,s);//读取一整行直到回车即包括空格
            for(char c : s)
            {
                if(c>='A' && c<='Z')
                {
                    cnt[c-'A']++;
                }
            }
    }
    int mx=*max_element(cnt,cnt+26);//寻找指定范围内最大值，*获取指针指向位置的值
    for(int h=mx;h>=1;h--)
    {
        int last=-1;
        for(int i=0;i<26;i++)
        {
            if(cnt[i] >= h) last=i;//得到最后一个*号位置后后面不再输出空格
        }
        for(int i=0;i<=last;i++)
        {
            if(i>0) cout<<" ";//给每个字母行之间留点空位，不包括第一个字母
            cout<<(cnt[i] >= h ? '*' : ' ');//三目运算
        }
        cout<<'\n';
    }
    
    for(int i=0;i<26;i++)
    {
        if(i>0) cout<<" ";
        cout<<char('A'+i);
    }
    cout<<'\n';
    return 0;

} 
