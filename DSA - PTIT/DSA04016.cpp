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
	faster();
	int t; cin >> t;
	while (t--){
		int m, n, k;
		cin >> m >> n >> k;
		int a[m+n+5];
		for(int i=0; i<m; i++) cin >> a[i];
		for(int i=m; i<n+m; i++) cin >> a[i];
		sort(a, a+m+n);
		cout << a[k-1] << endl;
	}
}