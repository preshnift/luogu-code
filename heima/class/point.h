#pragma once
#include<iostream>
using namespace std;
class Point
{
public:
//设置X
    void setX(int x);
//获取x
    int getX();
    void setY(int y);
    int getY();
private:
    int m_x;
    int m_y;
};