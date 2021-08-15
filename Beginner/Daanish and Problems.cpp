#include <bits/stdc++.h>
using namespace std;

int main() {
	int T ;
	cin>>T;
	while(T--){
	    array<int , 10 > a ;
	    for(int i = 0 ;i < 10 ;i++)
	    {
	        cin>>a[i];
	    }
	    int K;
	    cin>>K;
	    int flag = 0;
	    for(int i=9;i>=0;i--){
	        if(a[i]>0){
	            if(flag){
	                cout<<i+1<<endl;
	                break;
	            }
	            else if(K == a[i]){
	                flag = 1;
	                if(i==0) 
	                cout<< 1 << endl;
	            }
	            else {
	                K = K - a[i];
	                if(K < 0) {
	                    cout<< i+1<<endl;
	                    break;
	                }
	            }
	        }
	    }
	}
	return 0;
}
