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
		int n; cin >> n;
		vector<int> a(n);
		for (auto& i:a) cin >> i;
		vector<vector<int>> v;
		for (int i=n-1; i>=0; i--){
			bool sorted = true;
			for (int j=1; j<=i; j++){
				if (a[j] < a[j-1]){
					swap(a[j], a[j-1]);
					sorted = false;
				}
			}
			if (sorted) break;
			v.pb(a);
		}
		for (int i=v.size() - 1; i>=0; i--){
			cout << "Buoc " << i+1 << ": ";
			for (int j=0; j<n; j++){
				cout << v[i][j] << ' ';
			}
			cout << endl;
		}
	}
}