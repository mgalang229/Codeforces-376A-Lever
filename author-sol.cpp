#include <bits/stdc++.h>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	string s;
	cin >> s;
	int n = s.size();
	// if there are weights of mass (c) before the equal sign('='), then
	// it has to be associated with the bar ('=') before it
	long long mid = s.find('^');
	long long left = 0;
	for (int i = 0; i < mid; i++) {
		if (s[i] != '=') {
			left += (mid - i) * (s[i] - '0');
		}
	}
	long long right = 0;
	for (int i = mid + 1; i < n; i++) {
		if (s[i] != '=') {
			right += (i - mid) * (s[i] - '0');
		}
	}
	string ans = "";
	if (left == right) {
		ans = "balance";
	} else if (left > right) {
		ans = "left";
	} else {
		ans = "right";
	}
	cout << ans << '\n';
	return 0;
}
