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
typedef pair<int, int> pii;
typedef pair<ll, ll> pl;
typedef vector<int> vi;
typedef vector<ll> vl;
typedef vector<pii> vpii;
typedef vector<pl> vpl;
typedef vector<vi> vvi;
typedef vector<vl> vvl;

int main()
{

    ll t = 1;
    // cin>>t;
    while (t--)
    {
        ll n;
        sl(n);
        vl a, b, c;
        fo(i, n)
        {
            ll x, y, z;
            scanf("%lld %lld %lld", &x, &y, &z);
            a.push_back(x);
            b.push_back(y);
            c.push_back(z);
        }
        vvl v(n, vl(3, 0));
        v[n - 1] = {a[n - 1], b[n - 1], c[n - 1]};
        for (int i = n - 2; i >= 0; i--)
        {
            v[i][0] = a[i] + max(v[i + 1][1], v[i + 1][2]);
            v[i][1] = b[i] + max(v[i + 1][0], v[i + 1][2]);
            v[i][2] = c[i] + max(v[i + 1][1], v[i + 1][0]);
        }
        cout << max(v[0][0], max(v[0][1], v[0][2])) << endl;
    }
    return 0;
}