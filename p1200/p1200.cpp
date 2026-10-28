#include<iostream>
#include<cstdlib>
#include<string>
using namespace std;
int main()
{
    string star,team;
    cin>>star>>team;
    long long sum1=1,sum2=1;
    for(int i=0;i<star.size();i++)
    {
        star[i]=star[i]-'A'+1;
        sum1*=star[i];
    }
    for(int i=0;i<team.size();i++)
    {
        team[i]=team[i]-'A'+1;
        sum2*=team[i];
    }
    if(sum1%47==sum2%47)
    {
        printf("GO");
    }
    else{
        printf("STAY");
        return 0;
    }
}