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
    int N,K;
    cin>>N>>K;
    int A[N];
    for(int i=0;i<N;i++) {
        cin>>A[i];
        if(A[i]<=K) {
            K-=A[i];
            A[i]=1;
        }
        else A[i]=0;
    }
    for(int i=0;i<N;i++) cout<<A[i];
    cout<<endl;
}