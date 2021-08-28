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
    int flag[N]={0};
    string s1[N],s2[N];
    for(int i=0;i<N;i++)
        cin>>s1[i]>>s2[i];
    for(int i=0;i<N;i++)
        for(int j=i+1;j<N;j++){
            if(s1[i].compare(s1[j])==0) {
                flag[i]=1; 
                flag[j]=1;
            }
        }
    for(int i=0;i<N;i++)
        if(flag[i]==1) cout<<s1[i]<<" "<<s2[i]<<endl;
        else cout<< s1[i]<<endl;
}