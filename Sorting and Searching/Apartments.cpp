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
    int n,m;
    ll k;
    cin>>n>>m>>k;
    ll a[n],b[m];
    //cout<<k<<endl;
    for(int i=0;i<n;i++){
        cin>>a[i];
        //cout<<a[i];
    }
    for(int i=0;i<m;i++){
        cin>>b[i];

    }
    sort(a,a+n);
    sort(b,b+m);
    int j = 0;
    int ans = 0;
   // for(int i=0;i<n;i++)cout<<a[i];
    for(int i=0;i<n;){
        if(j==m)break;
       for(;j<m;){
           //cout<<a[i]<<" "<<b[j]<<endl;
            if(a[i]-k<=b[j] && a[i]+k>=b[j]){
                //cout<<a[i]<<" "<<b[j]<<endl;
                i++;
                j++;
                ans++;
                break;
            }
            else if(a[i]+k<b[j]){
                i++;
                break;
            }else if(a[i]-k>b[j]){
                j++;
                break;
            }
       }
    }
    cout<<ans<<endl;

}