#include <bits/stdc++.h>
using namespace std;

void solve();

int main() 
{
    int T;
    cin>>T;
    while(T--){
        solve();
    }
	return 0;
}

void solve(){
    string s;
    cin>>s;
    if(s[0]=='1') s[0]='0';
    cout<<1<<s<<endl;
}