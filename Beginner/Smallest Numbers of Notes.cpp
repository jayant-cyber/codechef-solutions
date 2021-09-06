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
    int count=0;
    while(N>0){
        if(N>=100) {
            count+=N/100;
            N-=(N/100)*100;
        }
        else if(N>=50){
            count+=N/50;
            N-=(N/50)*50;
        }
        else if(N>=10){
            count+=N/10;
            N-=(N/10)*10;
        }
        else if(N>=5){
            count+=N/5;
            N-=(N/5)*5;
        }
        else if(N>=2){
            count+=N/2;
            N-=(N/2)*2;
        }
        else if(N>=1){
            count+=N;
            N-=N;
        }
    }
    cout<<count<<endl;
}