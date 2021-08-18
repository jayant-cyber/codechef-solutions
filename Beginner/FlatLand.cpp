#include <bits/stdc++.h>
using namespace std;

int main() 
{
    int T;
    cin>>T;
    while(T--){
        int N,count=0,square;
        cin>>N;
        while(N>0){
            square = sqrt(N);
            N-=square * square;
            count++;
        }
        cout<<count<<endl;
    }
	return 0;
}
