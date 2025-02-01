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
char c='y';
do{
cout<<"Enter element to search: ";
i =0;
int key;
cin>>key;
while(i<n)
{
if(arr[i]==key)break;
else i++;
}
if(i<n)cout<<key<<" found at "<<i<<" position.\n";
else cout<<key<<" NOT FOUND.\n";

cout<<"Do you want to continue?[y/n]";
cin>>c;
}while(c=='y'||c=='Y');
return 0;
}