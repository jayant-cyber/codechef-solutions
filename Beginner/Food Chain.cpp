#include <bits/stdc++.h>
using namespace std;

int main() {
	int T ;
	cin>>T;
	while(T--){
	    int E,K;
	    cin>>E>>K;
	    int count=0;
	    while(E>0){
	        E/=K;
	        count++;
	    }
	    cout<<count<<endl;
	}
	return 0;
}
