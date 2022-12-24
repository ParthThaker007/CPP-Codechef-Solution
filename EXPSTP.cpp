#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t>0){
	int n;
    cin>>n;
    int v1,t1,v2,t2;
    cin>>v1>>t1>>v2>>t2;
    
    if(v1<1 and t1<n and v2<1 and t2<n){
        cout<<0<<endl;
        continue;
    }
    else if(v1<1 || t1>n){
        cout<<min(min(n-v2+1,n-t2+1),min(v2,t2))<<endl;
        continue;
    }
    else if(v2<1 || t2>n){
        cout<<min(min(n-v1+1,n-t1+1),min(v1,t1))<<endl;
        continue;
    }
    int j=min(min(n-v1+1,n-t1+1),min(v1,t1));
    int k=min(min(n-v2+1,n-t2+1),min(v2,t2));
    int alice=abs(v1-v2)+abs(t1-t2);
    cout<<min(alice,j+k)<<endl;
	    t--;
	}
	return 0;
}
