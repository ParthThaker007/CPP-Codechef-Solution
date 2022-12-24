#include <iostream>
#include<bits/stdc++.h>
using namespace std;
void solution(){
    int n;
	    cin>>n;
	    int a[n];
	    for(int i=0;i<n;i++)
	    {
	        cin>>a[i];
	    }
	    int l=0,h=n-1,ct=0;
	    while(l<h){
	        if(a[l]==a[h]){
	            l++,h--;
	            
	        }
	        else if(a[l]>a[h]){
	            a[l]=a[l]-a[h];
	            h--;
	            ct++;
	        }
	        else{
	            a[h]=a[h]-a[l];
	            l++;
	            ct++;
	        }
	    }
	    cout<<ct<<endl;
	
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
