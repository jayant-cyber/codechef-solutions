#include <bits/stdc++.h>
using namespace std;

int main() 
{   int T;
    cin>>T;
    while(T--){
        int N,M;
        cin>>N>>M;
        cout<<(((N*M)-(N+M))+1) << endl;
    }
	return 0;
}
