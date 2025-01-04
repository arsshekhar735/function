#include<iostream>
using namespace std;
void swap(int &a, int &b) //pass by reference
{
    int c;
    c = a; 
    a =b;
    b=c;
}
void swap(float &a, float &b) //function overloading
{
    float c;
    c = a;
    a = b;
    b  = c;
}
int main()
{
    int a, b;
    cin>>a>>b;
    cout<<endl;
    swap(a,b);
    cout<<endl;
    cout<<a<<b<<endl;
    float c= 1.33, d = 3.11;
    swap(c,d);
    cout<<c<<" "<<d<<endl;
 return 0;
}