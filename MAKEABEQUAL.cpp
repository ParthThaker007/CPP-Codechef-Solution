
#include<bits/stdc++.h>
using namespace std;
void solution(){
            int n;
            cin>>n;
            vector<long long >k(n) ;
            vector<long long>b(n);
            for(int i=0;i<n;i++){
                cin>>k[i];
                
            }
                long long m=0,j=0;
                for(int i=0;i<n;i++){
                    cin>>b[i];
                    m+=(k[i]-b[i]);
                    j=j+abs(k[i]-b[i]);
                }
                if(m!=0)
                {
                    cout<<-1<<endl;
                }
                else if(j%2!=0){
                    cout<<-1<<endl;
                }
                else{
                    cout<<j/2<<endl;
                   }
}
int main() {
	int t;
	cin>>t;
	while(t--){
	       
	    solution();      
                
	    
	}
	return 0;
}
