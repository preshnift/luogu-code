#include<iostream>
#include<string>
using namespace std;
int main()
{
    int a=0,b=0,c=0;
    string s;
    cin>>s;
    int val;
    for(int i=0;i<s.size();i+=5)
    {
        char left=s[i];
        char right=s[i+3];
        //识别右边的值
        if(right>='0' && right<= '9')
        {
            val=right-'0';
        }
        else
        {
            if(right=='a') val=a;
            else if(right=='b') val=b;
            else val=c;
        }
        //给左边赋值
        if(left=='a') a=val;
        else if(left=='b') b=val;
        else c=val;
    }
    cout<<a<<" "<<b<<" "<<c<<endl;
    return 0;
}