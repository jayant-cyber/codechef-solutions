#include <bits/stdc++.h>
using namespace std;

int main() {
	int T ;
	cin>>T;
	while(T--){
	    int N,K;
	    cin>>N>>K;
	    int sumWithoutPriceCeiling=0,sumWithPriceCeiling=0,P;
	    for(int i=0;i<N;i++){ 
	        cin>>P;
	        sumWithoutPriceCeiling += P;
	        if(P>K)  P=K;
	        sumWithPriceCeiling += P;
	    }
	    cout<<sumWithoutPriceCeiling - sumWithPriceCeiling<<endl;
	}
	return 0;
}
