#include<iostream>
#include<cstdlib>
#include<cmath>
using namespace std;

int a[1000],b[1000],c[1000],d[1000];
int main()
{
    int N;
    cin>>N;
    for(int i=0;i<N;i++)
    {
        cin>>a[i]>>b[i]>>c[i];
        d[i]=a[i]+b[i]+c[i];
    }
    int ans=0;
    for(int i=0;i<N;i++)
    {
        for(int j=i+1;j<N;j++)
        {
            if( abs(a[i]-a[j])<=5 && abs(b[i]-b[j])<=5 && abs(c[i]-c[j])<=5 && abs(d[i]-d[j])<=10 )
            {
                ans++;
            }
        }
    }
    cout<<ans;
    return 0;
}