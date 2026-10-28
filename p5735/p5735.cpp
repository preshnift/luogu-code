#include<iostream>
#include<cmath>
using namespace std;
int main()
{
//1、输入三个点坐标
    double x1,y1,x2,y2,x3,y3;
    scanf("%lf %lf",&x1,&y1);
    scanf("%lf %lf",&x2,&y2);
    scanf("%lf %lf",&x3,&y3);
//2、计算三条边长度
    double d1=sqrt((x1-x2)*(x1-x2)+(y1-y2)*(y1-y2));//sqrt(x)：求平方根。
    double d2=sqrt((x1-x3)*(x1-x3)+(y1-y3)*(y1-y3));
    double d3=sqrt((x2-x3)*(x2-x3)+(y2-y3)*(y2-y3));
    double p=d1+d2+d3;
    printf("%.2f\n",p);//fixed << setprecision(2)：固定输出两位小数。
    return 0;
}