#include <iostream>
using namespace std;
#define ll long long
void solution(){
      ll a , b ,c;
    cin>>a>>b>>c;
    ll ans =0;
    if(b+c<=a){
        ll alice = a-(b+c);
        ans+=b*(alice+c);
        ans+=(alice*c);
        ans+=(alice*(alice-1))/2;
    }
    else{
        ll alice=(b+c)-a;
        b=b-alice;
        c=c-alice;
        alice=0;
        ans+=b*(alice+c);
        ans+=(alice*c);
        ans+=(alice*(alice-1))/2;
        
    }
    cout<<ans<<endl;
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
