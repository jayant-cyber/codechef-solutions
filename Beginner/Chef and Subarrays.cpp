#include <bits/stdc++.h>
using namespace std;

int main() 
{
    int T;
    cin>>T;
    while(T--){
        int N;
        cin>>N;
        int a[N];
        for(int i=0;i<N;i++){
            cin>>a[i];
        }
        int count = 0;
        for(int i=0;i<N;i++)
        {
            int product = 1;
            int sum=0;
            
            for(int j=i;j<N;j++)
            {
                product = product * a[j];
                sum= sum + a[j];
                
                if(product == sum) count++;
            }
        }
        cout<<count<<endl;
    }
	return 0;
}
