#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int ans=0;
    for(int i=2;i<n;i++)
    {
        ans+=ans%i;
    }
    if(ans!=0)cout<<"Not a prime";
    else cout<<"Prime Number";
    return 0;
}