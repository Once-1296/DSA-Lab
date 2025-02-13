#include<iostream>
using namespace std;
long long int retmin(long long int l,long long int r,long long int prod,long long int l2)
{
    while(l<r)
    {
        //cout<<"whilermin\n";
        long long int m = (l+r)/2ll;
        if(m*prod<l2)
        {
            l=m+1ll;
        }
        else
        {
            r=m;
        }
    }
    if(r*prod<l2)return 0;
    return r;
}
long long int retmax(long long int l,long long int r,long long int prod,long long int r2)
{
    while(l<r)
    {
        //cout<<"whilermax"<<l<<r<<"\n";
        long long int m = (l+r+1ll)/2ll;
        if(m*prod>r2)
        {
            r=m-1ll;
        }
        else
        {
            l=m;
        }
    }
    if(l*prod>r2)return 0;
    return l;
}
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin>>t;
    while(t--)
    {
        long long int k,l1,r1,l2,r2;
        cin>>k>>l1>>r1>>l2>>r2;
        long long int prod = k;
        long long int ans =0;
        long long int l = max(l1,l2),r=min(r1,r2);
        ans+=max(0ll,r-l+1ll);
        while(prod*l1<=r2)
        {
            //cout<<ans<<"\n";
            long long int m1 = retmin(l1,r1,prod,l2),m2=retmax(l1,r1,prod,r2);
            //cout<<m1<<" "<<m2<<"\n";
            if(m1&&m2)ans+=max(m2-m1+1ll,0ll);
            prod*=k;
        }
        cout<<ans<<"\n";
    }
    return 0;
}