#include<bits/stdc++.h>
using namespace std;

int findpow(int a,int b)
{
    if(b==0)
    return 1;
    if(b==1)
    return a;
    int ans=findpow(a,b/2);
    if(b%2==0)
        return ans*ans;
    else
        return ans*ans*a;
}

int main()
{
    int a,b;
    cin>>a;
    cin>>b;
    cout<<findpow(a,b);

    return 0;
}
