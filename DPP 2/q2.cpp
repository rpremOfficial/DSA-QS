#include<bits/stdc++.h>
#include <algorithm>
using namespace std;

#define ll long long
#define pb push_back
#define l_b lower_bound
#define u_b upper_bound
#define ff first
#define ss second
#define all(a) a.begin(), a.end()
#define maxe *max_element

typedef unsigned long long ull;
typedef long double lld;

#ifndef ONLINE_JUDGE
#define debug(x) cerr << #x <<" "; _print(x); cerr << endl;
#else
#define debug(x)
#endif

void _print(ll t) {cerr << t;}
void _print(int t) {cerr << t;}
void _print(string t) {cerr << t;}
void _print(char t) {cerr << t;}
void _print(lld t) {cerr << t;}
void _print(double t) {cerr << t;}
void _print(ull t) {cerr << t;}

template <class T, class V> void _print(pair <T, V> p);
template <class T> void _print(vector <T> v);
template <class T> void _print(set <T> v);
template <class T, class V> void _print(map <T, V> v);
template <class T> void _print(multiset <T> v);
template <class T, class V> void _print(pair <T, V> p) {cerr << "{"; _print(p.ff); cerr << ","; _print(p.ss); cerr << "}";}
template <class T> void _print(vector <T> v) {cerr << "[ "; for (T i : v) {_print(i); cerr << " ";} cerr << "]";}
template <class T> void _print(set <T> v) {cerr << "[ "; for (T i : v) {_print(i); cerr << " ";} cerr << "]";}
template <class T> void _print(multiset <T> v) {cerr << "[ "; for (T i : v) {_print(i); cerr << " ";} cerr << "]";}
template <class T, class V> void _print(map <T, V> v) {cerr << "[ "; for (auto i : v) {_print(i); cerr << " ";} cerr << "]";}

const int MAX_N = 1e5 + 5;

// ---------------------------- Code Below ---------------------------- //


// void computeLPSArray(string pat, int M, int* lps) {
//     int len = 0;
//     lps[0] = 0;

//     int i = 1;
//     while (i < M) {
//         if (pat[i] == pat[len]) {
//             len++;
//             lps[i] = len;
//             i++;
//         }else{
//             if (len != 0) {
//                 len = lps[len - 1];
//             }else{
//                 lps[i] = 0;
//                 i++;
//             }
//         }
//     }
// }

void execute(){
	string s;
	cin >> s;

	bool ans = 1;

	int i = 0;
	int j = s.size()-1;
	while(i <= j){
		if(s[i] != s[j]){
			ans = 0;
			break;
		}

		i++;
		j--;
	}

	cout << ans << endl;
}


int main() {

    #ifndef ONLINE_JUDGE
        freopen("error.txt", "w", stderr);
    #endif

    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int tc;
    cin >> tc;
    while(tc--) {
        execute();
    }

    return 0;
}


// ------------------- Idea / Experiment / Temp Code ----------------- //

//  ll s = accumulate(arr, arr+n, 0ll);

// string toBinary(ll n){
//     string r;
//     while (n != 0){
//         r += ( n % 2 == 0 ? "0" : "1" );
//         n /= 2;
//     }
//     return r;
// }

// int interpolationSearch(vector<int> &vr, int n, int x){
// 	int lo = 0;
// 	int hi = n-1;
// 	while(lo <= hi && x >= vr[lo] && x <= vr[hi]){
// 		if(lo == hi){
// 			if(vr[lo] == x) return lo;
// 			return -1;
// 		}
// 		int pos = lo + (((double)(hi - lo) / (vr[hi] - vr[lo])) * (x - vr[lo]));
// 		if(vr[pos] == x) return pos;
// 		if(vr[pos] < x) lo = pos + 1;
// 		else hi = pos - 1;
// 	}
// 	return -1;
// }

// ------------------------------------------------------------------- //