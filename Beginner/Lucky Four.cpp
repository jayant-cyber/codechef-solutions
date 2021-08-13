#include <bits/stdc++.h>
using namespace std;

int main() {
	int T ;
	cin>>T;
	while(T--){
	    long int n;
	    int count = 0;
	    cin>>n;
	    while(n>0){
	        if(n%10==4) count++;
	        n=n/10;
	    }
	    cout<<count<<endl;
	}
	return 0;
}
