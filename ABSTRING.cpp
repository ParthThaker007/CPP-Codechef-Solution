#include <iostream>
#include<bits/stdc++.h>
using namespace std;
void solution(){
    int n;
    cin>>n;
    string str;
    cin>>str;
    if(n%2!=0){
        cout<<"NO"<<endl;
    }
    else{
        map<char,int> bob;
        for(int i=0;i<n;i++){
            bob[str[i]]++;
        }
        int alice = 1;
        for(auto it : bob){
            if(it.second % 2 !=0){
                cout<<"NO"<<endl;
                alice = 0;
                break;
            }
        }
        if(alice){
            cout<<"YES"<<endl;
        }
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
