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


float func(int* res, int pos)
{
    while (pos)
}

int solution()
{
    ll N;
    sl(N);
    vector<float> p;
    res = 1;
    fo(i, N)
    {
        float x;
        cin >> x;
        p.push_back(x);
        res = res*x;
    }   
    float ans = func(&res, 1);
    return 0;
}

int main()
{
    amazing;
    ll t = 1;
    //si(t);
    while (t--)
    {
        solution();
    }
    return 0;
}