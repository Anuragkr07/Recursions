#include<bits/stdc++.h>
using namespace std;

int multiply(int a, int b)
{
    if(a<b)
    return multiply(b,a);
    
    if(b==0)
    return 0;
    
    else
    return a+multiply(a,b-1);
}

int main()
{
    int a,b;
    cin>>a;
    cin>>b;
    cout<<multiply(a,b);
    

    return 0;
}
