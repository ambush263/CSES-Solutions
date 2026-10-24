#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve() {
    ll n;
    cin >> n;
    ll total = n * (n + 1) / 2;
    for (int i = 0; i < n - 1; i++) {
        ll x;
        cin >> x;
        total -= x;
    }
    cout << total;

}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
}
