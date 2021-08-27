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
    int N,M,K;
    cin>>N>>M>>K;
    int a[M],b[K],all[N+1]={0};
    for(int i=0;i<M;i++){
        cin>>a[i];
        all[a[i]]++;
    }
    for(int i=0;i<K;i++){
        cin>>b[i];
        all[b[i]]++;
    }
    int allTrackedAndIgnored = 0,allUntrackedAndUnignored=0;
    for(int i=1;i<=N;i++){
        if(all[i]==2) allTrackedAndIgnored++;
        else if(all[i]==0) allUntrackedAndUnignored++;
    }
    cout<<allTrackedAndIgnored<<" "<<allUntrackedAndUnignored<<endl;
}