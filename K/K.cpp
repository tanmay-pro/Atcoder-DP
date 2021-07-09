#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define PI 3.14159265
#define br cout << endl
#define fo(i, n) for (int i = 0; i < n; i++)
#define Fo(i, k, n) for (int i = k; k < n ? i < n : i > n; k < n ? i += 1 : i -= 1)
#define tr(container, it) \
    for (auto it = container.begin(); it != container.end(); it++)
#define amazing ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL)
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
ll MOD = 1e9 + 7;
int p = 31;

int main()
{
    amazing;
    ll n, k;
    cin >> n >> k;
    vl a(n);
    ll dp[k+1];
    fo(i, n)
    {
    	cin >> a[i];
    }
    dp[0] = 0;
    ll i = 1;
    while(i < a[0])
    {
    	dp[i] = 1;
    	i++;
    }
    dp[i] = -1;
    Fo(i, a[0] + 1, k+1)
    {
    	fo(j, a.size())
	    {
    		if(i > a[j] && dp[i - a[j]] == 1)
		    {
    			dp[i] = -1;
    			break;
		    }
    		else if( i == a[j])
		    {
    			dp[i] = -1;
		    }
	    }
	    if(dp[i] != -1)
	    {
	    	dp[i] = 1;
	    }
    }
    if(dp[k] == 1)
        cout << "Second";
    else
    	cout << "First";
    br;
    return 0;
}