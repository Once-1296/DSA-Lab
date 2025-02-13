#include<iostream>
using namespace std;
int main()
{
 int n,n2;
 cout<<"Enter number: ";
 cin>>n;
 n2=n;
 long long unsigned int fact =1ull;
 while(n>1)
 {
    fact = fact * (n);
    n--;
 }
 cout<<"Factorial of "<<n2<<" is "<<fact;
    return 0;
}