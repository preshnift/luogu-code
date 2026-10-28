#include<iostream>
#include<string>
#include<cstdlib>
//判断两个立方体是否相等
class Cube
{
public:
//设置长

    void setl(int l)
    {
        m_l=l;
    }
//获取长
    int getl()
    {
        return m_l;
    }
//设置宽
    void setw(int w)
    {
        m_w=w;
    }
//获取宽
    int getw()
    {
        return m_w;
    }
//设置高
    void seth(int h)
    {
        m_h=h;
    }
//获取高
    int geth()
    {
        return m_h;
    }

//局部函数判断两个立方体是否相等
    bool isSame(Cube &c)
    {
        if(m_h==c.m_h && m_l==c.m_l && m_w==c.m_w)
        {
            return true;
        }
        return false;
    }
//获取面积
    int calculateS()
    {
        return 2*m_h*m_w+2*m_h*m_l+2*m_w*m_l;
    }
//获取体积
    int calculateV()
    {
        return m_h*m_w*m_l;
    }
private:
    int m_l;
    int m_h;
    int m_w;
    //行为获取立方体面积 体积
    //设置长宽高
    //属性
};
bool isSame(Cube &c1 ,Cube &c2)
{
    if(c1.getw()==c2.getw() && c1.geth()==c2.geth() && c1.getl()==c2.getl())
    {
        return true;
    }
    return false;
}
using namespace std;
int main()
{
    Cube c1;
    c1.setl(10);
    c1.setw(10);
    c1.seth(10);
    Cube c2;
    c2.setl(10);
    c2.seth(10);
    c2.setw(10);
    cout<<"c的面积为"<<c1.calculateS()<<endl;
    cout<<"c1的体积为"<<c1.calculateV()<<endl;
//局部函数
    if(c1.isSame(c2))
    {
        cout<<"两个立方体完全相同"<<endl;
    }
    else cout<<"不相同"<<endl;
//全局函数
    if(isSame(c1,c2))
    {
        cout<<"两个正方体完全相同"<<endl;
    }
    else cout<<"两个正方体不同"<<endl;
    system("pause");
    return 0;
}