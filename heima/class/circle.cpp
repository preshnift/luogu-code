#include<iostream>
#include<cstdlib>
#include"point.h"
#include"circle.h"
//设计一个圆类和点类的关系
using namespace std;
//点类
    //设置x
    void Point::setX(int a)
    {
        m_x=a;
    } 
    //获取x
    int Point::getX()
    {
        return m_x;
    }
    //设置b
    void Point::setY(int b)
    {
        m_y=b;
    }
    //获取n
    int Point::getY()
    {
        return m_y;
    }
//圆类
    //设置r
    void circle::setR(int r)
    {
        m_R=r;
    }
    //获取r
    int circle::getR()
    {
        return m_R;
    }
//获取圆心
    //设置圆心
    void circle::setCenter(Point center)
    {
        m_center=center;
    }
    //获取圆心位置
    Point circle::getcenter()
    {
        return m_center;
    }
void isincircle(circle &c,Point &p)
{
    int distance=
        (c.getcenter().getX()-p.getX())^2+(c.getcenter().getY()-p.getY())^2;
    int rdistance=
        c.getR()*c.getR();
    if(distance==rdistance)
    {
        cout<<"该点在圆上"<<endl;
    }
    else if(distance>rdistance)
    {
        cout<<"该点在圆外"<<endl;
    }
    else cout<<"该点在圆内"<<endl;
}
int main()
{
    circle c;
    Point center;
    c.setR(10);
    center.setX(10);
    center.setY(0);
    c.setCenter(center);
    Point p;
    p.setX(10);
    p.setY(10);
    isincircle(c,p);
    system("pause");
    return 0;
}