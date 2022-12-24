#include <iostream>
#include<bits/stdc++.h>
using namespace std;
void solution(){
    int n;
    cin>>n;
    int a[n];
    map<int,int>k;
    for(int i=0;i<n;i++){
        cin>>a[i];
        k[a[i]]++;
    }
    int j=0;
    int b[n+1]={0};
    for(auto it:k){
        j=max(j,it.second);
        b[it.first]=it.second;
    }
    int z=0;
    for(int i=0;i<n;i++){
        if((i^(i+1))<=1){
            z=max(z,b[i]+b[i+1]);
        }
    }
    j=max(j,z);
    cout<<n-j<<endl;
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
