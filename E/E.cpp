// Bottom up

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define PI 3.1415926535897932384626
#define si(x) scanf("%d", &x)
#define sl(x) scanf("%lld", &x)
#define ss(s) scanf("%s", s)
#define pi(x) printf("%d\n", x)
#define pl(x) printf("%lld\n", x)
#define ps(s) printf("%s\n", s)
#define br printf("\n")
#define fo(i, n) for (int i = 0; i < n; i++)
#define Fo(i, k, n) for (int i = k; k < n ? i < n : i > n; k < n ? i += 1 : i -= 1)
#define deb(x) cout << #x << " = " << x << endl;
#define deb2(x, y) cout << #x << " = " << x << ", " << #y << " = " << y << endl
#define deba(i, a, n) \
    fo(i, n) { cout << a[i] << " "; }
#define amazing ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);
typedef pair<int, int> pii;
typedef pair<ll, ll> pl;
typedef vector<int> vi;
typedef vector<ll> vl;
typedef vector<pii> vpii;
typedef vector<pl> vpl;
typedef vector<vi> vvi;
typedef vector<vl> vvl;
const int INF = 0x3f3f3f3f;
int MOD = 1e9 + 7;

int main()
{
    amazing;
    ll n, W;
    cin >> n >> W;
    ll wt[101], val[101];
    for (ll i = 1; i <= n; i++)
    {
        cin >> wt[i] >> val[i];
    }
    ll k[n + 1][W + 1];
    for (int i = 0; i <= n; i++)
    {
        for (int w = 0; w <= W; w++)
        {
            if (i == 0 || w == 0)
            {
                k[i][w] = 0;
            }
            else if (wt[i] <= w)
            {
                k[i][w] = max(k[i - 1][w], val[i] + k[i - 1][w - wt[i]]);
            }
            else
            {
                k[i][w] = k[i - 1][w];
            }
        }
    }
    cout << k[n][W] << endl;
    return 0;
}