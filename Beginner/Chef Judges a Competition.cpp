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
    int n;
    cin>>n;
    int A[n],B[n],maxA=0,maxB=0;
    int Asum=0,Bsum=0;
    for(int i=0;i<n;i++){
        cin>>A[i];
        if(maxA<A[i]) maxA=A[i];
        Asum+=A[i];
    }
    for(int i=0;i<n;i++){
        cin>>B[i];
        if(maxB<B[i]) maxB=B[i];
        Bsum+=B[i];
    }
    // sort(A,A+n);
    // sort(B,B+n);
    // int Asum=0,Bsum=0;
    // for(int i=0;i<n-1;i++)Asum+=A[i];
    // for(int i=0;i<n-1;i++)Bsum+=B[i];
    
    Asum-maxA<Bsum-maxB ? cout<<"Alice" : Asum-maxA>Bsum-maxB ? cout<<"Bob" : cout<<"Draw";
    cout<<endl;
}