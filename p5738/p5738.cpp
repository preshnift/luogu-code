#include<iostream>
#include<cstdlib>
using namespace std;
int main()
{
    int a[105][25];
    int n,m;
    cin>>n>>m;
    double max_score=0;
    for(int i=0;i<n;i++)
    {
        
    int max=0,min=1e9;
        double sum=0;//每次学生的总和
        for(int j=0;j<m;j++)
        {
            cin>>a[i][j];
            if(a[i][j]>+max) max=a[i][j];
            if(a[i][j]<+min) min=a[i][j];
            sum+=a[i][j];
        }
        sum=(sum-max-min)*1.0/(m-2);
        if(sum>=max_score) max_score = sum;
    }
    printf("%.2lf",max_score);
    system("pause");
}