#include <bits/stdc++.h>
using namespace std;

int search(vector<int> &v, int n, int pos, int val) {
    if(pos==n)
        return -1;
    if(v[pos]==val)
        return pos;
    return search(v,n,pos+1,val);
}
int main() {
	vector<int> v;
	int n,a,val;  
	cin>>n;
	cin>>val;
	for(int i=0; i<n; i++)
	{
	    cin>>a;
	    v.push_back(a);
	}
	int ans=search(v,v.size(), 0, val);
	cout<<ans;
	return 0;
}
