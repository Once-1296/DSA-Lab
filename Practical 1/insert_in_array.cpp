#include<iostream>
using namespace std;
int main()
{
int n;
cout<<"Enter no of elements: ";
cin>>n;
int arr[10000];
int i =0;
while(i<n)
{
cout<<"Enter "<<i+1<<" element: ";
cin>>arr[i];
i++;
}
i =0;
int pos,elem,tmp=arr[0];
cout<<"Enter position(0 indexed) to insert: ";
cin>>pos;
cout<<"Enter element to insert: ";
cin>>elem;
while(i<n+1)
{
if(i<pos)i++;
else
{
tmp = arr[i];
arr[i]=elem;
elem = tmp;
i++;
}
}
cout<<"Displaying elements:\n";
i=0;
while(i<n+1)
{
cout<<i+1<<" element: ";
cout<<arr[i]<<"\n";
i++;
}
return 0;
}