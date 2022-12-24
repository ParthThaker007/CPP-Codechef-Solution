#include <iostream>
#include<bits/stdc++.h>
using namespace std;
void solution(){
    string a;
    cin>>a;
    int k=a.size();
    if(a[0]==a[k-1]){
        cout<<k-2<<endl;
    }
    else{
        cout<<2<<endl;
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
