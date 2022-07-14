/*********************
 *   Sunny Sutradhar *
 *     14/07/2022    *
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
 

long long lcm(ll a, ll b)
{
    return (a / gcd(a, b)) * b;
}
const int N = 50000;
bool prime[N+1];
vector<int>all_prime;

void sieve(){
    for(int i=0;i<=N;i++){
        prime[i] = true;
    }

    for(int i=2;i*i<=N;i++){
        if(prime[i]){
            for(int j = i+i;j<=N;j+=i){
                prime[j] = false;
            }
        }
    }
    for(int i=2;i<=N;i++){
        if(prime[i]){
            //cout<<i<<" ";
            all_prime.push_back(i);
        }
    }
}



int main(){
    int t=1;
    // scanf("%d",&t);
    // int cs = 1;
    // sieve();
    while(t--){
        int n,m;
        cin>>n>>m;

        ll a[n],b[m];
        set<pair<int,int>>s;

        for(int i=0;i<n;i++){
            cin>>a[i];
            s.insert({a[i],i});

        }

        for(int j=0;j<m;j++){
            cin>>b[j];
            
        }
        //sort(a,a+n);
        // for(auto it:s){
        //     cout<<it.first<<" "<<it.second<<endl;
        // }
        for(int i=0;i<m;i++){
            //cout<<b[i]<<endl;
             auto it = s.lower_bound({b[i]+1,0});
             if(it == s.begin()){
                cout<<-1<<endl;
             }
             else{
                it--;
                cout<<it->first<<endl;
                s.erase(it);
            }
        }
    }

}