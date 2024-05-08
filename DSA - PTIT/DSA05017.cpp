#include<bits/stdc++.h>
using namespace std;
#pragma GCC optimize("O2")
#pragma GCC target("avx,avx2,fma")
#define faster() {ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);}
#define ll long long
#define pii pair<int, int>
#define vi vector<int>
#define vll vector<long long>
#define mii map<int, int>
#define si set<int>
#define fi first
#define sc second
#define pb push_back
#define eb emplace_back
#define ins insert
#define sz size()
#define len length
#define mp make_pair
#define sp << ' ' <<
#define endl '\n'
#define precision(x) setprecision(x) << fixed
#define keocon {cout << "I used to be your Tinkle Bell, we are too old for fairytales, my love."}


//end of template


void solve(){
	/*hav fun with coding*/
	int n; cin >> n;
	int l[n+5], r[n+5], a[n+5];
	for (int i=0; i<n; i++){
		cin >> a[i];
	}
	for (int i=0; i<n; i++){
		l[i] = a[i];
		for (int j=0; j<i; j++){
			if (a[i] > a[j]){
				l[i] = max(l[i], l[j] + a[i]);
			}
		}
	}
	for (int i=n-1; i>=0; i--){
		r[i] = a[i];
		for (int j=n-1; j>i; j--){
			if (r[i] > r[j]){
				r[i] = max(r[i], r[j] + a[i]);
			}
		}
	}
	int res = -1;
	for (int i=0; i<n; i++){
		res = max(res, l[i] + r[i] - a[i]);
	}
	cout << res;

}
main(){
	faster();
	int T = 1;
	cin >> T;
	while (T--){
		solve();
		cout << endl;
	}
	return 0;
}