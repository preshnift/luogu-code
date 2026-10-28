#include <iostream>
#include <string>
using namespace std;
class Person
{
public:
    // 设置姓名
    void setName(string name)
    {
        m_Name;
    }
    // 获取姓名
    string getName()
    {
        return m_Name;
    }
    // 获取年龄
    int getAge()
    {
        return m_Age;
    }
    // 设置年龄
    void setAge(int age)
    {
        if (age < 0 || age > 150)
        {
            cout << age << "年龄输入有误，赋值失败" << endl;
            return;
        }
        m_Age;
    }
    // 设置偶像
    void setIdol(string idol)
    {
        m_idol;
    }

private:
    string m_Name;  // 可读可写
    int m_Age = 18; // 只读 也可以写（年龄必须在0-150之间）
    string m_idol;  // 只写
};
int main()
{
    Person p;
    p.setName("张三");
    cout << "姓名" << p.getName() << endl;
    // 年龄设置
    //  p.setAge(20)--无法设置
    cout << "年龄： " << p.getAge() << endl;
    p.setIdol("小明");
    // cout<<"偶像："<<p.setIdol()<<endl;//只能写不能读
    return 0;
}
// 成员属性设置私有
// 1、可以自己设置读写权限
// 2、对于写可以检测数据有效性