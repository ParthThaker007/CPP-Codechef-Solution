#include <bits/stdc++.h>
using namespace std;
void solution(){
    int n,j;
	    cin>>n>>j;
	    int a[n];
	    int flag=0;
	    for(int i=0;i<n;i++){
	        cin>>a[i];
	        if(a[i]==j and i!=n-1){
	            flag=1;
	        }
	    }
	    if(n==1 and j==a[0]){
	        cout<<"Yes"<<endl;
	        
	    }
	    else if(!flag){
	        cout<<"No"<<endl;
	    }
	    else{
	        cout<<"Yes"<<endl;
	    }    
}
int main() {
	int t;
	cin>>t;
	while(t>0){
	    solution();
	    t--;
	}
	return 0;
}
