#include<iostream>
using namespace std;
int main()
{
int n;
cout<<"Enter no of elements: ";
cin>>n;
int arr[1000];
int i =0;
while(i<n)

{
cout<<"Enter "<<i+1<<" element: ";
cin>>arr[i];
i++;
}
i =0;
cout<<"Displaying elements:\n";
while(i<n)
{
cout<<i+1<<" element: ";
cout<<arr[i]<<"\n";
i++;
}
return 0;
}