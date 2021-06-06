#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define PI 3.14159265
#define br cout << endl
#define fo(i, n) for (int i = 0; i < n; i++)
#define Fo(i, k, n) for (int i = k; k < n ? i < n : i > n; k < n ? i += 1 : i -= 1)
#define amazing ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);
#define ff first
#define ss second
#define pb push_back
#define file_read                     \
    freopen("input.txt", "r", stdin); \
    freopen("output.txt", "w", stdout);
typedef pair<int, int> pii;
typedef pair<ll, ll> pll;
typedef vector<int> vi;
typedef vector<ll> vl;
typedef vector<string> vs;
typedef vector<pii> vpii;
typedef vector<pll> vpl;
typedef vector<vi> vvi;
typedef vector<vl> vvl;
typedef map<int, int> mii;
typedef map<ll, ll> mll;
int m = 1e9 + 7;
int p = 31;

int main()
{
    ll n;
    cin >> n;
    vl a, b, c;
    fo(i, n)
    {
        ll x, y, z;
        cin >> x >> y >> z;
        a.push_back(x);
        b.push_back(y);
        c.push_back(z);
    }
    ll dp[n][3];
    dp[n - 1][0] = a[n - 1];
    dp[n - 1][1] = b[n - 1];
    dp[n - 1][2] = c[n - 1];
    Fo(i, n - 2, -1)
    {
        dp[i][0] = a[i] + max(dp[i + 1][1], dp[i + 1][2]);
        dp[i][1] = b[i] + max(dp[i + 1][0], dp[i + 1][2]);
        dp[i][2] = c[i] + max(dp[i + 1][1], dp[i + 1][0]);
    }
    cout << max(dp[0][0], max(dp[0][1], dp[0][2]));
    br;
    return 0;
}