#include <bits/stdc++.h>
using namespace std;

int max_sum_sw(vector<int> v,int k)
{
   int sum = 0;

   int i = 0,j = 0;
   int max_sum = INT_MIN;

   while(j<v.size()){
       sum+=v[j];
    if((j - i + 1)<k){
      j++;
    }

    else if((j-i+1)==k){
       max_sum = max(max_sum,sum);
       sum-=v[i];
       i++;
       j++;
    }
   }
   
return max_sum;
}


int main()
{

  int n;
  cin>>n;

  vector<int> v;

  for(int i = 0;i<n;++i){
    int x;
    cin>>x;
    v.push_back(x);
  }
 
  int k;
  cin>>k;

  cout<<max_sum_sw(v,k)<<" ";

  return 0;
}
