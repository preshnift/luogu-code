#include <iostream>
#include <string>
using namespace std;

// 1. 定义英雄结构体
struct Hero
{
    string name;    // 姓名
    int age;        // 年龄
    string gender;  // 性别
};

// 2. 冒泡排序函数：对英雄数组按年龄升序排列
void bubbleSort(Hero heroArr[], int len)
{
    for (int i = 0; i < len - 1; i++)  // 排序总轮数
    {
        for (int j = 0; j < len - 1 - i; j++)  // 每轮对比次数
        {
            // 按年龄比较：前一个元素年龄更大，就交换两个结构体
            if (heroArr[j].age > heroArr[j + 1].age)
            {
                Hero temp = heroArr[j];
                heroArr[j] = heroArr[j + 1];
                heroArr[j + 1] = temp;
            }
        }
    }
}

// 3. 打印函数：遍历输出所有英雄信息
void printHero(Hero heroArr[], int len)
{
    for (int i = 0; i < len; i++)
    {
        cout << "姓名：" << heroArr[i].name 
            << "  年龄：" << heroArr[i].age 
            << "  性别：" << heroArr[i].gender << endl;
    }
}

int main()
{
    // 4. 创建结构体数组并初始化5名英雄数据
    Hero heroArray[5] = 
    {
        {"刘备", 35, "男"},//匹配顺序name->age->gender
        {"关羽", 33, "男"},
        {"张飞", 30, "男"},
        {"赵云", 28, "男"},
        {"曹操", 40, "男"}
    };

    int len = sizeof(heroArray) / sizeof(heroArray[0]);

    cout << "排序前：" << endl;
    printHero(heroArray, len);

    // 5. 调用排序函数
    bubbleSort(heroArray, len);

    cout << "\n排序后（按年龄升序）：" << endl;
    printHero(heroArray, len);

    return 0;
}
