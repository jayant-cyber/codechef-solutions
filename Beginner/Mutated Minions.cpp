#include <bits/stdc++.h>
#define loop(n) for(int ii = 0; ii < n; ++ ii)

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
    int N,additive;
    cin>>N>>additive;
    int A,count=0;
    loop(N) {
        cin>>A;
        A+=additive;
        if(A%7==0) count++;
    }
    cout<<count<<endl;
        
}