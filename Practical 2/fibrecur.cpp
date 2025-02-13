#include<iostream>
using namespace std;
long long unsigned int fib(long long unsigned int n)
{
    if(n==1ull||n==0ull)return n;
    else return fib(n-1ull)+fib(n-2ull);
}
int main()
{
 int n;
 cout<<"Enter number: ";
 cin>>n;
 long long unsigned int fibo = fib(n*1ull);
 cout<<n<<"th Fibonacci number is "<<fibo;
    return 0;
}