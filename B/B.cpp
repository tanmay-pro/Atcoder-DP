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
#define Fo(i, k, n) for (i = k; k < n ? i < n : i > n; k < n ? i += 1 : i -= 1)
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

    ll n, k;
    cin >> n >> k;
    vl h(1, 0);
    ll x;
    fo(i, n)
    {
        sl(x);
        h.push_back(x);
    }
    vl res(n + 5, 0);
    res[2] = abs(h[2] - h[1]);
    res[1] = 0;
    for (int j = 3; j <= n; j++)
    {
        vl temp;
        for (int i = 0; i < k; i++)
        {
            if (j - i - 1 >= 1)
            {
                ll r;
                r = res[j - i - 1] + abs(h[j] - h[j - i - 1]);
                temp.push_back(r);
            }
        }
        sort(temp.begin(), temp.end());
        res[j] = temp[0];
    }
    cout << res[n] << endl;
    return 0;
}