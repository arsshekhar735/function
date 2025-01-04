#include <iostream>
using namespace std;

void incr(int *ptr)
{
    for(int i = 0; i < 5; i++)
    {
        ptr[i] = ptr[i] * 2;
    }
}

int main()
{
    int arr[5] = {1,2,3,4,5};
    incr(arr);
    for(int i = 0; i < 5; i++)
    {
        cout<<arr[i]<<" ";
    }

}
