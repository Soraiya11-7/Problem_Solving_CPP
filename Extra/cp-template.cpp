#include <bits/stdc++.h>
using namespace std;

#define ll                       long long
#define ull                      unsigned long long
#define dl                       double
#define nl                       cout<<"\n";
#define YES                      cout<<"YES";
#define NO                       cout<<"NO";
#define Yes                      cout << "Yes\n"
#define yes                      cout << "yes\n"
#define No                       cout << "No\n"
#define no                       cout << "no\n"

#define scl(x)                   scanf("%lld", &x)
#define sci(x)                   scanf("%d", &x)
#define pb                       push_back
#define pf                       push_front
#define ppb                      pop_back
#define ppf                      pop_front
#define ff                       first
#define ss                       second
#define pii                      pair<int, int>
#define pll                      pair<ll, ll>
#define pdd                      pair<double, double>

#define vll                      vector<long long> 
#define vstr                     vector<string>
#define vi                       vector<int>
#define all(v)                   v.begin(),v.end()
#define rall(v)                  v.rbegin(),v.rend()
#define max_ele(v)               *max_element(all(v))
#define min_ele(v)               *min_element(all(v))
#define s_asc(v)                 sort(all(v))
#define s_des(v)                 sort(rall(v))
#define gcd(a,b)                 __gcd(a,b)
#define lcm(a,b)                 ( a / __gcd(a,b) ) * b
#define sqr(a)                   ((a) * (a))


#define fastio                   \
    ios::sync_with_stdio(false); \
    cin.tie(0);
    
// #define optimize()               ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define INF                      (1LL << 30)
#define LL_INF                   (1LL << 62)
#define pi                       acos(-1)
#define MOD                      1000000007

int ceil_Val(int a, int b){
   return(a + b - 1) / b;
}

ll getSum(ll n){
  ll sum = n*(n+1) / 2;
  return sum;
}

ll getSumOfSquares(ll n){
  ll sum = n*(n+1)*(2*n+1) / 6;
  return sum;
}

ll getSumOfCubes(ll n){
  ll sum = (n*(n+1) / 2) * (n*(n+1) / 2);
  return sum;
}
 


int main(){
    fastio;
    
    return 0;
}
