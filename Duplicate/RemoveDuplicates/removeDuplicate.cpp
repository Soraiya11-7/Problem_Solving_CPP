#include <bits/stdc++.h>
using namespace std;

#define ll                       long long
#define nl                       cout<<"\n";
#define YES                      cout<<"YES\n";
#define NO                       cout<<"NO\n";

int main() {
  
    int n;
    cin >> n;
    int a[n+1];   
    for (int i = 0; i < n; i++) {
        cin>>a[i];
    }
    unordered_set<int> seen;
    vector<int> v;
 
    for(int i=n-1; i>=0;i--){
        if(seen.count(a[i])==0) {
            seen.insert(a[i]);
            v.push_back(a[i]);
        }
    }
    cout<<v.size()<<"\n";
    for(int i=v.size()-1;i>=0;i--){
        cout<<v[i]<<" ";
    }
    nl
    return 0;
}