#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t>0){
	    int n;
	    cin>>n;
	    int a[n];
	    int kj=INT_MAX;
	    for(int i=0;i<n;i++){
	        cin>>a[i];
	        if(kj>a[i]){
	            kj=a[i];
	        }
	    }
	    int alice=0;
	    int temp=0;
	    for(int i=0;i<n;i++){
	        if(a[i]!=kj){
	            if(a[i]%kj==0){
	                alice++;
	            }
	            else{
	                temp=1;
	                break;
	            }
	        }
	    }
	    if(temp){
	        cout<<n<<endl;
	    }
	    else{
	        cout<<alice<<endl;
	    }
	    t--;
	}
	
	return 0;
}
