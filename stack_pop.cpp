#include<iostream>
using namespace std;
#define max_size 10
int top = -1, stack[max_size];
void push(int n);
void pop();
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
    pop();
    display();
    return 0;
}

void push(int n)
{
    if(top >= max_size-1)
    {
        cout << "\nOverflow\n";
    }
    else
    {
        top++;
        stack[top] = n;
    }
}

void pop()
{
    if(top == -1)
    {
        cout << "\nUnderflow\n";
    }
    else
    {
        cout << "\nPopped element ="<<stack[top]<<"\n";
        top--;
    }
}

void display()
{
    for(int i=0; i<=top; i++)
    {
        cout << stack[i] << " ";
    }
    cout << "\n";
}