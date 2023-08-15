#include <iostream>
#include <vector>
#include <queue>
#include <stack>
#include <tuple>
#include <string>
#include <algorithm>

using namespace std;

using ll = long long;
using vb = vector<bool>;
using vvb = vector<vb>;
using vi = vector<int>;
using vvi = vector<vi>;
using vl = vector<ll>;
using vvl = vector<vl>;
using pii = pair<int, int>;
using vii = vector<pii>;
using pll = pair<ll, ll>;
using vll = vector<pll>;

int main() {
	ios::sync_with_stdio(false);
	std::cin.tie(nullptr);

	auto f = vvi(1001, vi(1001, 0));

	int n;
	cin >> n;
	for (auto i = 1; i <= n; ++i) {
		int x, y, w, h;
		cin >> x >> y >> w >> h;

		for (auto r = 0; r < h; ++r) {
			for (auto c = 0; c < w; ++c) {
				f[y + r][x + c] = i;
			}
		}
	}

	for (auto i = 1; i <= n; ++i) {
		auto ans = int{ 0 };
		for (auto r = 0; r < 1001; ++r) {
			for (auto c = 0; c < 1001; ++c) {
				if (i == f[r][c]) {
					++ans;
				}
			}
		}
		cout << ans << '\n';
	}

	return 0;
}