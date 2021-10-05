#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{   ll n;cin>>n;
    ll a;
    ll sum=0;
    for(ll i=0;i<n-1;i++)
    {
        cin>>a;
        sum=sum+a;
    }
    cout<<(n*(n+1)/2)-sum;
 
    return 0;
}