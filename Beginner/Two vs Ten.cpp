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
    int N;
    cin>>N;
    int count=0;
    if(N%10==0) count=0;
    else if (N%5==0) count = 1;
    else count=-1;
    cout<<count<<endl;
}