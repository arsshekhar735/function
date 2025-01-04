#include<iostream>
using namespace std;

/*void incr(int n)
{
    n++;
}*/
void incr1(int *ptr)//pass by pointer
{
    *ptr = *ptr + 1;
}
int main()
{
    int num = 10;
    int temp = num;
    //cout<<temp<<endl;
   // incr(num);
    cout<<num<<endl;

    //But if you want to increase the num value using function.
    //Then pass the addresss of num to the function and in function take argument as pointer.
    incr1(&num);//address of num passed to the function
    cout<<"The value of num is "<<num<<endl;

}