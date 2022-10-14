#include<bits/stdc++.h>
using namespace std;

int solution(int a[],int n, int m)
{
    sort(a,a+n);
    int min =(a[0+(m-1)]-a[0]);
    
    for(int i=1;i<n-(m-1);i++)
    {
        if((a[i+(m-1)]-a[i]) < min)
        {
           min=(a[i+(m-1)]-a[i]);
        }
    }

    return min;
}

int main()
{
    int n,m;
    cin>>m>>n;
    int a[n];
     
     for(int i=0;i<n;i++)
        cin>>a[i];
    cout<<solution(a,n,m);
 
}