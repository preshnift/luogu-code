#pragma once
#include"point.h"
class circle
{
public:
//设置半径
    void setR(int r);
//获取半径
    int getR();
//设置圆心
    void setCenter(Point center);
    Point getcenter();
private:
    int m_R;//半径
    Point m_center;//圆心

};
