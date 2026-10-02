#include <iostream>
using namespace std;
int main()
{
    int arr[6]={10,20,30,40,50,60};
    cout<<"After deletion array is:\n";
    for (int i=0; i<5; i++)
    {
        arr[i]=arr[i+1];
    }
    for (int i=0; i<5; i++)
    {
    cout<<"index is "<< i <<"value is "<<arr[i]<<"\n";
    }
    return 0;
}