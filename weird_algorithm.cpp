#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve() {
    //basically collatz conjecture
    ll n;
    cin>>n;
    ll curr;
    curr = n;
    cout<<curr<<" ";
    while(curr!=1){
        if(curr%2==0){
            curr /= 2;
        }
        else curr = 3*curr + 1;

        cout<<curr<<" ";
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
}
