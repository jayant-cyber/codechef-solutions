#include <bits/stdc++.h>
using namespace std;

int main() {
	int T ;
	cin>>T;
	while(T--){
	    int N,K;
	    cin>>N>>K;
	    int a,sum=0;
	    for(int i=0;i<N;i++){
	        cin>>a;
	        sum+=a;
	    }
	    sum % K == 0 ? cout<<0 :cout<<1 ;
	    cout<<endl;
	}
	return 0;
}
