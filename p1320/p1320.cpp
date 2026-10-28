#include<iostream>
#include<string>
#include<vector>
#include<cstdlib>
using namespace std;
int main()
{
    string s,all;
    int n=0;
    while(cin>>s)
    {
        all+=s; // 拼接每行的01字符串，不是数字相加
        n++;    // 累计输入的总行数，也就是N
    }
    vector<int> ans; // 动态数组，存放每组连续字符的计数
    char target='0'; // 题目规定：先统计0的连续个数
    int cnt=0;       // 计数器，记录当前target字符连续出现多少次
    for(char ch : all) // 从头到尾遍历all字符串，每次取出单个字符放到ch
    {
        if(ch==target)
        {
            cnt++; // 当前字符和目标一样，计数器+1
        }
        else
        {
            ans.push_back(cnt); // 把这一段统计的数量存入数组
            target=(target=='0') ? '1':'0'; // 切换要统计的目标字符：0变1，1变0
            cnt=1; // 当前这个新字符，是下一段的第一个，cnt初始化为1
        }
    }
    ans.push_back(cnt); // 循环结束，把最后一组计数存入数组（非常关键，容易漏）
    cout<<n; // 压缩码第一个数字是N
    for(int x : ans) // 遍历ans数组，输出后面所有数字
    {
        cout<<" "<<x;
    }
    system("pause"); // 本地暂停
    return 0;
}
