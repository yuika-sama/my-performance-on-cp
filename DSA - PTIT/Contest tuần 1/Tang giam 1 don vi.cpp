#include <bits/stdc++.h>
#define faster() {ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);}
#define endl '\n'
#define precision(x)  setprecision(x) << fixed
#define pi pair<int, int>
#define ll long long
#define pb push_back
#define mp make_pair
#define keocon {cout << "I used to be your Tinkle Bell, but we're too old for fairytales, my love."}
using namespace std;
main(){
	int n; cin >> n;
	int plus = 0, minus = 0;
	string s;
	for (int i=0; i<n; i++){
		cin >> s;
		if (s.find("++") != -1) plus++;
		if (s.find("--") != -1) minus++;
	}
	cout << plus - minus;
}