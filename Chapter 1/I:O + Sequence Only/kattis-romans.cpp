#include<bits/stdc++.h>
using namespace std;

void solve() {
    double x;
    cin >> x;
    cout << (int) round(x * 1000.0 * 5280 / 4854) << "\n";
}

int main() {
    ios::sync_with_stdio(0); cin.tie(0);
    solve();
    return 0;
}