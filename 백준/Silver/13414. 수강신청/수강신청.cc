#include <iostream>
#include <map>
#include <algorithm>
#include <vector>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
    cout.tie(NULL);

	map<string, int>m;
	vector<pair<int, string>>v;

	int k, L; cin >> k >> L;
	for (int i = 0; i < L; i++) {
		string number; cin >> number;
		m[number] = i + 1;
	}

	for (auto i = m.begin(); i != m.end(); i++) {
		string a = i->first;
		int b = i->second;
		v.push_back({ b,a });
	}

	sort(v.begin(), v.end());
	for (int i = 0; i < min(k,(int)v.size()); i++) {
		cout << v[i].second << "\n";
	}
}