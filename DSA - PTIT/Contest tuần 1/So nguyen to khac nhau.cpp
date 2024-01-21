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
bool prime(int n){
	if (n<2) return false;
	if (n==2) return true;
	if (n%2==0) return false;
	for (int i=3; i<=sqrt(n); i+=2){
		if (n%i==0){
			return false;
		}
	}
	return true;
}
main(){
	faster();
	map<int, bool> m;
	m[0] = m[1] = false;
	for (int i=2; i<=1000; i++){
		if (prime(i)){
			m[i] = true;
		}
	}
	int t; cin >> t;
	while (t--){
		int n; cin >> n;
		set<int> s;
		int x;
		while (n--){
			cin >> x;
			if (m[x] == true){
				s.insert(x);
			}
		}
		for (auto i:s) cout << i << ' ';
		cout << endl;
	}
}