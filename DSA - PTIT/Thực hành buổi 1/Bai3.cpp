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
//ac

//end of template
vector<string> v;
set<string> s;
int n;
int x[15];
bool vs[15];
string f;
int pos;
void Try(int i){
	for (int j = 1; j<=n; j++){
		if (!vs[j]){
			vs[j] = true;
			x[i] = j;
			if (i == n){
				if (x[1] == pos){
					string tmp = "";
					for (int i=1; i<=n; i++){
						tmp = tmp + v[x[i]] + ' ';
					}
					s.ins(tmp);
				}
			} else Try(i+1);
			vs[j] = false;
		}
	}
}
void display(){
	for (auto i:s){
		cout << i << endl;
	}
}
void solve(){
	/*hav fun with coding*/
	cin >> n;
	v.pb(" ");
	for (int i=1; i<=n; i++){
		cin >> f;
		v.pb(f);
		x[i] = i;
	}
	cin >> f;
	for (int i=1; i<=n; i++){
		if (f == v[i]){
			pos = i;
			break;
		}
	}	
	Try(1);
	display();
}
main(){
	faster();
	int T = 1;
	// cin >> T;
	while (T--){
		solve();
		cout << endl;
	}
	return 0;
}