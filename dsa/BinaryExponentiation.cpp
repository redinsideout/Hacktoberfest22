#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
const ll mod = 1e9+7;

ll power(ll a,ll b)
{
   
   if(b==0){
   	return 1;
   }

   ll ans = power(a,b/2);

   if(b%2==0){
   	return (ans*ans)%mod;
   }

   else{
   	return (a*(ans*ans)%mod)%mod;
   }


}
int main()
{
   
    cout<<power(2,13);


	return 0;
}
