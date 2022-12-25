#include <iostream>
#include <bits/stdc++.h>
using namespace std;
long long int ans(int index, string& pa, vector<int>& dp, map<string,string>& hardcoded, string curr, set<string>& disset, long long int mod){
    if(index<0){
        auto it = disset.find(curr);
        if(it==disset.end()){
            disset.insert(curr);
            return 1;
        }
        return 0;
    }
    if(dp[index] != -1) return dp[index];
    long long int takingone=ans(index-1, pa, dp, hardcoded, hardcoded[pa.substr(index, 1)+curr], disset, mod);
    long long int takingtwo = 0;
    if(index-1 >= 0 && hardcoded.find(pa.substr(index-1, 2)) != hardcoded.end())
    takingtwo = ans(index-2, pa, dp, hardcoded, hardcoded[pa.substr(index-1, 2)]+curr, disset, mod);
    return dp[index] = (takingone+takingtwo) % 998244353;
}
long long int solution(){
    string pa;
    cin>>pa;
    long long int n = pa.length();
    vector<int> dp(n, -1);
    map<string, string> hardcoded {{"a", "01"}, {"b", "10"}, {"ab", "010"}, {"ba", "101"}};
    set<string> disset;
    cout<< ans(n-1, pa, dp, hardcoded, "", disset, 998244353) <<endl;
    return 0;
}
int main(){
    long long int t;
    cin >> t;
    while(t>0)    {
        solution();
        t--;
        
    }
    return 0;
}