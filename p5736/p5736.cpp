#include<iostream>
#include<cstdlib>
int a[100];
bool isPrime(int n)
{
    if(n<2)
    {
        return false;
    }
    for(int i=2;i*i<=n;i++)
    {
        if(n % i== 0)
        {
            return false;
        }
    }
    return true;
}
using namespace std;
int main()
{
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        if(isPrime(a[i])) cout<<a[i]<<" ";
    }

}