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
    if(ans!=0)cout<<"Not a prime"<<endl;
    else cout<<"Prime Number"<<endl;
    // check for even or odd condition 
    if(n%2==0)cout<<"Even"<<endl;
    else cout<<"Odd"<<endl;
    return 0;
}