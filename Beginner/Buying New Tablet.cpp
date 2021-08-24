#include <bits/stdc++.h>
using namespace std;

int main() 
{
    int T;
    cin>>T;
    while(T--){
        int N, B;
        cin>>N>>B;
        int maxScreenSize = 0;
        while(N--){
            int W,H,P;
            cin>>W>>H>>P;
            if ( P<=B ) {maxScreenSize= max(maxScreenSize,(W*H));} 
        }
        maxScreenSize ? cout<<maxScreenSize:cout<<"no tablet";
        cout<<endl;
    }
	return 0;
}
