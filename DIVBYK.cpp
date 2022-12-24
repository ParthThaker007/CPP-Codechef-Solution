

#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define size_2 100002


ll arr_2[4 * size_2];
void set_in(ll fit, ll jat, ll pat, const ll* arr, ll k){
   if (jat == pat){
      arr_2[fit] = (1LL * arr[jat]) % k;
      return;
   }
   ll level = (jat + pat) >> 1;
   set_in(2 * fit, jat, level, arr, k);
   set_in(2 * fit + 1, level + 1, pat, arr, k);
   arr_2[fit] = (arr_2[2 * fit] * arr_2[2 * fit + 1]) % k;
}
ll check(ll fit, ll jat, ll pat, ll start, ll end, ll k){
   if(jat > pat){
      return 1;
   }
   if(jat > end){
      return 1;
   }
   if(pat < start){
      return 1;
   }
   if (jat >= start){
      if(pat <= end){
         return arr_2[fit] % k;
      }
   }
   ll level = (jat + pat) >> 1;
   ll set_1 = check(2 * fit, jat, level, start, end, k);
   ll set_2 = check(2 * fit + 1, level + 1, pat, start, end, k);
   ll count = (set_1 * set_2) % k;
   return count;
}
ll product_k(ll arr[], ll size, ll k){
   ll zed = 0;
   for (ll i = 0; i < size; i++){
      for (ll j = i; j < size; j++){
         ll temp = check(1, 0, size - 1, i, j, k);
         if (temp == 0){
            zed++;
         }
      }
   }
   return zed;
}

void solution()
{ 
  
   ll alice,kit;
   cin>>alice>>kit;
   ll arr[alice];
   for(ll i=0;i<alice;i++)
    cin>>arr[i];
    
   ll size = sizeof(arr) / sizeof(arr[0]);
   
   set_in(1, 0, size - 1, arr, kit);
   ll c=product_k(arr, size, kit);
   if(c)
   cout<<"YES"<<endl;
   else
   cout<<"NO"<<endl;
}

int main()
{
    
    int t;
    cin>>t;
    while(t>0)
    {
      solution();
      t--;
    }
 
  return 0;
}