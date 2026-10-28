#include <iostream>
#include <cstdlib>
using namespace std;
const double PI = 3.14;
// class代表设计一个类，紧跟类名称
class Person
{
public:
    string m_Name;

protected:
    string m_Car;

private:
    int m_Password;
public:
void func()
{
    m_Name="张三";
    m_Car="拖拉机";
    m_Password = 123456;
}

} ;
class Circle
{
    // 访问权限
    // 公共权限 public类内外可访问
    // 保护权限 protected 类外不可，儿子可以访问父亲私有保护内容
    // 私有权限 private 类外不可，儿子不可
    //
public:
    // 属性
    // 半径
    int m_r;
    // 行为
    // 获取圆周长
    double calculateZC() // 函数名 这里表示计算周长()目前没有参数
    {
        return 2 * PI * m_r; // PI代表圆周率
    }

}; // 属性和行为作为一个整体来表现一个事物
class Student
{
public:
    string name;
    string number;
};
int main()
{
    Person p1;
    p1.m_Name = "李四";
    
    // p1.m_Car = "奔驰";
    // p1.m_Password;
    // //     //通过园类创建具体的圆
    // //     Circle c1;
    // //     //给圆对象进行赋值
    // //     c1.m_r=10;
    // //     cout<<"圆的周长为： "<<c1.calculateZC()<<endl;
    // //
    // Student s1;
    // cin >> s1.name;
    // cin >> s1.number;
    // cout << s1.name << endl;
    // cout << s1.number << endl;
    // system("pause");
    // return 0;
}
