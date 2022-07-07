/*********************
 *   Sunny Sutradhar *
 *     06/07/2022    *
 *********************/
#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
typedef unsigned long long int ull;

long long gcd(long long int a, long long int b)
{
  if (b == 0)
    return a;
  return gcd(b, a % b);
}
 

long long lcm(int a, int b)
{
    return (a / gcd(a, b)) * b;
}

int main(){
    int t=1;
    //cin>>t;

    while(t--){
       int n;
       ll x;
       cin>>n>>x;
       int a[n];

       for(int i=0;i<n;i++){
        cin>>a[i];
       }
       sort(a,a+n);

       int i = 0 ,j = n-1;
       ll sum = 0;
       int count = 0;
       while(i<=j){
           sum = a[j];
           j--;
           int con = 1;
           for(;i<n;i++){
              // cout<<sum<<endl;
               if(sum+a[i]>x || con==2)break;
               con++;
               sum+=a[i];
           }
           //cout<<sum<<endl;
           count++;
       }
       cout<<count<<endl;


    }

}