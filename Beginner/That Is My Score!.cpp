#include <bits/stdc++.h>
using namespace std;

int main() {
	int T ;
	cin>>T;
	while(T--){
	    int N;
	    cin>>N;
	    int a[11] = {0};
	    while(N--){
	        int j ,score;
	        cin>>j>>score;
	        if(j<9) a[j-1] = max(a[j-1],score);
	    }
	    int sum = 0;
	    for(int i = 0; i < 9; i++) sum += a[i];
	    cout<<sum<<endl;
	}
	return 0;
}
