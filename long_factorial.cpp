#include <iostream>
using namespace std;
long int fact(int n)
{
    if(n==1)
    return 1;
    else
    return n*fact(n-1);
}
int main(){
    int n;
    cout<<"Enetr the value of n:";
    cin>>n;
    cout<<fact(n);
}

