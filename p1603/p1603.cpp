#include<iostream>
#include<vector>
#include<algorithm>
#include<cstdio>
#include<map>
#include<string>
using namespace std;
bool cmp(string a , string b)//贪心函数，满足条件则a放前面
{
    return a+b<b+a;
}
int main()
{
    map<string, int> mp;//单词到数字的映射表
    mp["zero"] = 0; mp["one"] = 1; mp["two"] = 2; mp["three"] = 3; mp["four"] = 4;
    mp["five"] = 5; mp["six"] = 6; mp["seven"] = 7; mp["eight"] = 8; mp["nine"] = 9;
    mp["ten"] = 10; mp["eleven"] = 11; mp["twelve"] = 12; mp["thirteen"] = 13; mp["fourteen"] = 14;
    mp["fifteen"] = 15; mp["sixteen"] = 16; mp["seventeen"] = 17; mp["eighteen"] = 18; mp["nineteen"] = 19; mp["twenty"] = 20;
    mp["a"] = 1; mp["both"] = 2; mp["another"] = 1; mp["first"] = 1; mp["second"] = 2; mp["third"] = 3;
    vector<string> num_str;
    for(int i=0;i<6;i++)
    {
        string s;
        cin>>s;
        if(s.back() == '.')
        {
            s.pop_back();//删掉字符串最后一个字符
        }
        if(mp.find(s) != mp.end())//end不是最后一个元素，是容器末尾的标记
        //在mp中找到s条件为真进入循环
        {
            int val=mp[s];
            int mod=val*val%100;
            char buf[3];//最后一个为\0 or null
            sprintf(buf,"%02d",mod);//把数字变为字符串%02d不足左边补位0
            num_str.push_back(string(buf));//放入vector容器中
        }
    
    }
    if(num_str.empty())//检测到函数为空
    {
        cout<<0<<endl;
        return 0;
    }
    sort(num_str.begin(),num_str.end(),cmp);
    string res;
    for(auto &t : num_str)//自动识别t的类型，依次取出赋给t
    {
        res+=t;
    }
    cout<<stoll(res)<<endl;//转化成长整型输出自动去掉前号0,==string to long long 
    system("pause");
    return 0;
}