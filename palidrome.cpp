#include <bits/stdc++.h>
using namespace std;

bool palindrome(string s, int start, int end) {
    if(start == end)
        return true;
    if(s[start]!=s[end])
        return false;
    if(start<end+1)
        return palindrome(s, start+1, end-1);
    return true;
}
int main() {
	string s;
	cin>>s;
	if(s.length()<2) 
	 {
	     cout<<"is palindrome";  
	     return 0;
	 }
	bool ans = palindrome(s,0,s.length()-1);
	if(ans==1)
	    cout<<"is palindrome";
	 else
	    cout<<"not palindrome";
	return 0;
}
