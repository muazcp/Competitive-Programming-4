#include<bits/stdc++.h>
using namespace std;

void solve() {
	map<int, int> cnt;
	int n;
	cin >> n;
	vector<int> A(n);
	for(int& e : A) {
		cin >> e;
		cnt[e]++;
	}
	cin >> n;
	vector<int> B(n);
	for(int& e : B) {
		cin >> e;
		cnt[e]++;
	}
	cin >> n;
	vector<int> C(n);
	for(int& e : C) {
		cin >> e;
		cnt[e]++;
	}
	set<int> _A, _B, _C;
	for(int e : A) {
		if(cnt[e] == 1) {
			_A.insert(e);
		}
	}
	for(int e : B) {
		if(cnt[e] == 1) {
			_B.insert(e);
		}
	}
	for(int e : C) {
		if(cnt[e] == 1) {
			_C.insert(e);
		}
	}
	int res = max({_A.size(), _B.size(), _C.size()});
	if(res == _A.size()) {
		cout << 1 << " " << _A.size();
		for(int e : _A) {
			cout << " " << e;
		}
		cout << "\n";
	}
	if(res == _B.size()) {
		cout << 2 << " " << _B.size();
		for(int e : _B) {
			cout << " " << e;
		}
		cout << "\n";
	}
	if(res == _C.size()) {
		cout << 3 << " " << _C.size();
		for(int e : _C) {
			cout << " " << e;
		}
		cout << "\n";
	}
}
 
int main() {
	ios::sync_with_stdio(0); cin.tie(0);
	int T;
	cin >> T;
	for(int cs = 1; cs <= T; cs++) {
		cout << "Case #" << cs << ":\n";
		solve();
	}
	return 0;
}
