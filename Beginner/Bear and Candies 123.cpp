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
    int A,B;
    cin>>A>>B;
    int i=1,count1=0,count2=0;
    while(A>=i){
            A-=i;
            i+=2;
            count1++;
        }
    i=2;
    while(B>=i){
            B-=i;
            i+=2;
            count2++;
        }
    if(count1>count2) {
            cout<<"Limak";
        }
    else{
            cout<<"Bob";
        }
        cout<<endl;
    }