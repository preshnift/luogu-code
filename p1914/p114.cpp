#include<iostream>
#include<cstdlib>
#include<string>
using namespace std;
int main()
{
    string s;
    int n;
    cin>>n;
    cin>>s;
    for(int i=0;i<s.size();i++)
    {
        s[i]=s[i]+n;
        if(s[i]>'z')
        {
            s[i]=(s[i]-'a'+n)%26+'a';
        }
    }
    cout<<s;
    system("pause");
    return 0;
}