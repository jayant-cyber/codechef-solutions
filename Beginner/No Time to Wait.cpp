#include <bits/stdc++.h>
#define loop(n) for(int ii = 0; ii < n; ++ ii)

using namespace std;

void solve();

int main() 
{
    solve();
	return 0;
}

void solve(){
   int n,h,x;
   cin>>n>>h>>x;
   int a[n];
   loop(n)  cin>>a[ii];
   bool flag=false;
   loop(n){
       if(a[ii]+x>=h) {
           flag = true;
           break;
       }
   }
   flag ? cout<<"YES" : cout<< "NO" ;
   cout<<endl;
}