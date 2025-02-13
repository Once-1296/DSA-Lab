#include<iostream>
using namespace std;
long long unsigned int fact(long long unsigned int n)
{
    if(n<=1ull)return 1ull;
    else return n*fact(n-1ull);
}
int main()
{
 int n;
 cout<<"Enter number: ";
 cin>>n;
 long long unsigned int factorial = fact(n*1ull);
 cout<<"Factorial of "<<n<<" is "<<factorial;
    return 0;
}