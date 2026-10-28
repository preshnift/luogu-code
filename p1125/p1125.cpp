#include<iostream>
#include<string>
int a[26];
using namespace std;
int main()
{
    string s;
    cin>>s;
    for(int i=0;i<s.size();i++)
    {
        a[s[i]-'a']++;//将出现的字母存入数组中
    }
    int maxn=0;
    int minn=105;
    for(int i=0;i<26;i++)
    {
        if(a[i]==0) continue;//这个字母没出现过，跳过
        if(a[i]>maxn) maxn=a[i];
        if(a[i]<minn) minn=a[i];
    }
    int x=maxn-minn;
    bool is_prime=true;
    if(x<=1) is_prime=false;
    else
    {
        for(int i=2;i<x;i++)
        {
            if(x % i==0)
            {
                is_prime=false;
                break;
            }
        }
    }
    if(is_prime)
    {
        cout<<"Lucky Word"<<endl;
        cout<<x<<endl;
    }
    else
    {
        cout<<"No Answer"<<endl;
        cout<<0;
    }
    system("pause");
    return 0;
}