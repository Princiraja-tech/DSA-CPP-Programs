#include <iostream>
using namespace std;
#define max_size 10
int top = -1,stack[max_size];
void push(int n);
void display();
int main()
{
    push(10);
    push(20);
    push(30);
    push(40);
    push(50);
    push(60);
    push(70);
    push(80);
    push(90);
    push(100);
    display();
    push(200);
    return 0;
}
void push(int n)
{
    if(top>=max_size-1)
    cout<<"\nOverflow\n";
    top++;
    stack[top]=n;
}
void display()
{
    for(int i=0; i<=top; i++)
    cout<<stack[i]<<" ";
    cout<<"\n";
}
   