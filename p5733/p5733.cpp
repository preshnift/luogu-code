#include<iostream>
#include<string>
#include<cstdlib>
using namespace std;
int main()
{
    string str;
    cin>>str;
    for(int i = 0;i < str.size();i++)//访问str的总长度
    {
        if(str[i]>='a' && str[i]<='z')
        {
            str[i]-=32;
        }
    }
    cout<<str<<endl;
    system("pause");
}