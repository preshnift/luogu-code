#include<iostream>
#include<string>
#include<cstdlib>
#include<cctype>
using namespace std;
string toLower(string s)
{
    for(int i=0;i<s.size();i++)
    {
        s[i]=tolower(s[i]);//把s全部转成小写
    }
    return s;
}
int main()
{
    string word,article;
    cin>>word;
    cin.ignore();//吃掉换行，不然getline读空行
    getline(cin,article);//读取一整行输入，包括空格直到回车
    //cin>>article读到空格便停下
    string low_word=toLower(word);
    string low_article=toLower(article);
    low_word=" "+low_word+" ";//将每个单词用空格框起否则首位单词无法识别
    low_article=" "+low_article+" ";
    int first_pos=-1;
    int pos=0;
    int cnt=0;
    while((pos=low_article.find(low_word,pos)) != string::npos)//找到第一个单词出现时的下标
    {
        cnt++;
        if(first_pos==-1)
        {
            first_pos=pos;
        }
        pos+=low_word.size()-1;//跳到下一个位置
    }
    if(cnt==0)
    {
        cout<<-1<<endl;
    }
    else
    {
        cout<<cnt<<" "<<first_pos<<endl;
    }
    system("pause");
    return 0;
}