#include <bits/stdc++.h>
using namespace std;

int main() {
	int T ;
	cin>>T;
	while(T--){
	    int G1 , S1, B1, G2, S2, B2;
	    cin>>G1 >> S1>> B1>> G2>> S2>> B2;
	    G1 + S1 + B1 > G2 + S2 + B2 ? cout<<1 :cout<<2 ;
	    cout<<endl;
	}
	return 0;
}
