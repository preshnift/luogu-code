#include<iostream>
using namespace std;
class Student
{
public://公共权限
    //属性
    string m_Name;
    int m_Id;
    //行为
    //显示姓名和学号
    void showStudent()
    {
        cout<<"姓名： "<<m_Name<<"学号： "<<m_Id<<endl;
    }
    //给姓名赋值
    void setName(string name)
    {
        m_Name = name;
    }
};
int mian ()
{
    Student s1;
    s1.m_Name = "张三";
    s1.m_Id = 123456;
    s1.showStudent();
}