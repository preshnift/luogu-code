#include<iostream>
#include<string>
#include<cstdlib>
using namespace std;
const int N=15;//表达式必须含有常量->5
int n;
void rotate90(char in[N][N], char out[N][N])
{
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            out[j][n-1-i]=in[i][j];
        }
    }
}
void rotate180(char in[N][N], char out[N][N])
{
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            out[n-1-i][n-1-j]=in[i][j];
        }
    }
}
void rotate270(char in[N][N], char out[N][N])
{
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            out[n-1-j][i]=in[i][j];
        }
    }
}
void reflect(char in[N][N],char out[N][N])
{
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            out[i][n-1-j]=in[i][j];
        }
    }
}
bool equal(char a[N][N],char b[N][N])
{
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(a[i][j]!=b[i][j]) return false; 
        }
    }
    return true;
}
char ori[N][N],tar[N][N];
int main()
{
    cin>>n;
    for(int i=0;i<n;i++) cin>>ori[i];//输入图像
    for(int i=0;i<n;i++) cin>>tar[i];//预期图像
    char tmp[N][N];//判断1234
    rotate90(ori,tmp);
    if(equal(tmp,tar)){cout<<1;return 0;}
    rotate180(ori,tmp);
    if(equal(tmp,tar)){cout<<2;return 0;}
    rotate270(ori,tmp);
    if(equal(tmp,tar)){cout<<3;return 0;}
    reflect(ori,tmp);
    if(equal(tmp,tar)){cout<<4;return 0;}
    char ref[N][N];//判断5
    reflect(ori,ref);
    rotate90(ref,tmp);
    if(equal(tmp,tar)){cout<<5;return 0;}
    rotate180(ref,tmp);
    if(equal(tmp,tar)){cout<<5;return 0;}
    rotate270(ref,tmp);
    if(equal(tmp,tar)){cout<<5;return 0;}
    if(equal(ori,tar)){cout<<6;return 0;}
    cout<<7;
    system("pause");
    return 0;
}