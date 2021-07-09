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

const int maxim = 1e5 + 1;
vector<int> edges[maxim];
int in_degree[maxim];
int dist[maxim];
bool visited[maxim];

void dfs(int a)
{
	visited[a] = true;
	for (int b : edges[a])
	{
		dist[b] = max(dist[b], dist[a] + 1);
		--in_degree[b];
		if (in_degree[b] == 0)
			dfs(b);
	}
}

int main()
{
	amazing;
	int n, m;
	cin >> n >> m;
	while (m--)
	{
		int a, b;
		cin >> a >> b;
		edges[a].push_back(b);
		++in_degree[b];
	}
	Fo(i, 1, n+1)
	{
		if(!visited[i] && in_degree[i] == 0)
		{
			dfs(i);
		}
	}
	int answer = 0;
	Fo(i, 1, n+1)
	{
		answer = max(answer, dist[i]);
	}
	cout << answer;
	br;
	return 0;
}