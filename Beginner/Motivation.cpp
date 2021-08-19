#include <bits/stdc++.h>
using namespace std;

int main() {
	int T ;
	cin>>T;
	while(T--){
	    int N,X;
	    cin>>N>>X;
	    int S,R,Best=0;
	    for(int i=0;i<N;i++) {
	        cin>>S>>R;
	        if(S<=X)  Best=max(Best,R); 
	    }
	    cout<<Best<<endl;
	}
	return 0;
}
