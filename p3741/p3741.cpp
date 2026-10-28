#include<iostream>
#include<string>
#include<cstdlib>
using namespace std;
int main()
{
    int n;
    cin>>n;
    string s;
    cin>>s;
    int base=0;//统计VK的数量
    for(int i=0;i<n-1;i++)
    {
        if(s[i]=='V' && s[i+1]=='K')
        {
            base++;
            s[i]=='A';
            s[i+1]=='C';
        }
    }
    bool can_add=false;
    for(int i=0;i<n-1;i++)
    {
        if(s[i]==s[i+1])
        {
            can_add=true;
        }
    }
    if(can_add) cout<<base+1<<endl;
    else cout<<base<<endl;
    system("pause");
}