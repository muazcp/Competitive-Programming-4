#include<bits/stdc++.h>
using namespace std;

void solve() {
    long long n;
    cin >> n;
    cout << (int) floor((sqrt(1 + 8 * n) - 1) / 2) << "\n";
}

int main() {
    ios::sync_with_stdio(0); cin.tie(0);
    int T;
    cin >> T;
    while(T--) {
        solve();
    }
    return 0;
}