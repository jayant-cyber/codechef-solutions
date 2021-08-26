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
    int a,b[101]={0};
    for(int i=0;i<N;i++){
        cin>>a;
        b[a]++;
    }
    int maxvalue=0;
    for(int i =1;i<101;i++){
        maxvalue = max(maxvalue,b[i]);
    }
    cout<<N - maxvalue<<endl;
}