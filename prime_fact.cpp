#include<iostream>
using namespace std;
int fact(int n)
{
    int ans=1;
    for(int i = 1; i<=n;i++)
    {
        ans = ans *i;
    }
    return ans;
}
bool prime(int n)
{
    if(n<2)
    return 0;
    for(int i=2; i<n;i++)
    {
        if(n%2==0)
        return 0;
    }
    return 1;
}
int main()
{
    int a, b;
    cin>>a>>b;
    cout<<prime(a)<<endl;
    cout<<prime(b)<<endl;
    cout<<prime(b-a)<<endl;
    cout<<fact(a)<<endl; 
    cout<<fact(b)<<endl;
    cout<<fact(b-a)<<endl;
 return 0;
}