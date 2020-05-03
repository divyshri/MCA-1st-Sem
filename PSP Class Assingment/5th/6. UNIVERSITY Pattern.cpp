#include<bits/stdc++.h>
using namespace std;
int main() {
	int a, b, c, temp;
	cin >> a >> b >> c;
	vector<int> v1, v2, v3;
	int sum1 = 0, sum2 = 0, sum3 = 0;
	for (int i = 0; i < a; i++) {
		cin >> temp;
		sum1 += temp;
		v1.push_back(temp);
	}
	for (int i = 0; i < b; i++) {
		cin >> temp;
		sum2 += temp;
		v2.push_back(temp);
	}
	for (int i = 0; i < c; i++) {
		cin >> temp;
		sum3 += temp;
		v3.push_back(temp);
	}
	reverse(v1.begin(), v1.end());
	reverse(v2.begin(), v2.end());
	reverse(v3.begin(), v3.end());
	for (int i = 1; i < a; i++)
		v1[i] = v1[i] + v1[i - 1];

	for (int i = 1; i < b; i++)
		v2[i] = v2[i] + v2[i - 1];

	for (int i = 1; i < c; i++)
		v3[i] = v3[i] + v3[i - 1];

	map<int, bool> m1, m2, m3;
	for (int i = 0; i < a; i++)
		m1[v1[i]] = true;

	for (int i = 0; i < b; i++)
		m2[v2[i]] = true;

	for (int i = 0; i < c; i++)
		m3[v3[i]] = true;

	int res = 0;
	for (auto x : m1)
		if (m2.find(x.first) != m2.end() and m3.find(x.first) != m3.end())
			res = x.first;

	cout << res << endl;
}