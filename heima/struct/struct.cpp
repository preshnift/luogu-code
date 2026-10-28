#include <iostream>
#include <string>
#include <ctime>
using namespace std;

// 学生结构体
struct Student
{
    string name;
    int score;
};

// 教师结构体，里面嵌套学生数组
struct Teacher
{
    string name;
    int id;
    Student stu[5];  // 每个老师带5个学生
};

// 给老师和学生赋值的函数
void assignInfo(Teacher tArr[], int len)
{
    // 给老师赋值
    for (int i = 0; i < len; i++)
    {
        tArr[i].id = i + 1;
        tArr[i].name = "教师" + to_string(i + 1);

        // 给该老师名下5个学生赋值
        for (int j = 0; j < 5; j++)
        {
            tArr[i].stu[j].name = "学生" + to_string(j + 1);//to_string把j+1转成字符串
            //是类型转换函数
            // 随机分数 60~100
            tArr[i].stu[j].score = rand() % 41 + 60;
        }
    }
}

// 打印所有信息
void printInfo(Teacher tArr[], int len)
{
    for (int i = 0; i < len; i++)
    {
        cout << "教师编号：" << tArr[i].id
            << "  姓名：" << tArr[i].name << endl;

        for (int j = 0; j < 5; j++)
        {
            cout << "\t" << tArr[i].stu[j].name
                << "  分数：" << tArr[i].stu[j].score << endl;
        }
    }
}

int main()
{
    // 设置随机数种子，只需要设置一次
    srand((unsigned int)time(NULL));

    // 准备3位老师
    Teacher teacherArr[3];
    int length = sizeof(teacherArr) / sizeof(teacherArr[0]);

    assignInfo(teacherArr, length);
    printInfo(teacherArr, length);

    return 0;
}
