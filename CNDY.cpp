 #include<bits/stdc++.h>
using namespace std;
void solution(){
     int n;
	    cin>>n;
	    map<int,int> j;
	    int a[2*n];
	    for(int i=0;i<2*n;i++){
	        cin>>a[i];
	        j[a[i]]++;
	    }
	    int Alok =0;
	    for(auto k: j){
	        if(k.second>=3){ 
	           cout<<"No\n";
	            Alok = 1;
	            break;
	        }
	    }
	    if(!Alok){
	        cout<<"Yes\n";
	    }
}
int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t>0){
	   solution();
	    t--;
	}
	
	return 0;
}