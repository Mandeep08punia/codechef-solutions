/*Author:mp04*/
//Link:https://www.codechef.com/problems/INDEP
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007
#define pb(i) push_back(i)
#define pp() pop_back()
#define f first
#define s second
#define rep(i, n) for (int i = 0; i < (n); i++)
#define rrep(i, n) for (int i = ((n)-1); i >= 0; i--)
#define mk(l, r) make_pair(l, r)
#define all(vc) vc.begin(), vc.end()
#define gc getchar_unlocked
#define ms(i, j) memset(i, j, sizeof i)
#define w(t) while (t--)
#define precise(x) fixed << setprecision(x)
const ll MAX = 1e5 + 5;
const ll INF = 2e18;
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
//using namespace std;
using namespace __gnu_pbds;
typedef tree<pair<int, int>, null_type, less<pair<int, int>>, rb_tree_tag, tree_order_statistics_node_update> PBDS;

#define FASTIO                      \
  ios_base::sync_with_stdio(false); \
  cin.tie(NULL);                    \
  cout.tie(NULL)

const int N = 5e5 + 5;

vector<int> adj[N];

void solve()
{
  int n, m;
  cin >> n >> m;
  for (int i = 1; i <= n; i++) {
    adj[i].clear();
  }

  for (int i = 0; i < m; i++) {
    int x, y;
    cin >> x >> y;
    adj[x].pb(y);
    adj[y].pb(x);
  }
  map<vector<int>, int > mp;
  //all elements in this vector form the set B
  for (int i = 1; i <= n; i++) {
    sort(adj[i].begin(), adj[i].end());
    mp[adj[i]]++;//keeping count of all unique adjacency lists
  }
  int ans = 0;
  string s;
  for (int i = 0; i < n; i++) {
    s.push_back('0');
  }
  //s contains n zeros
  for (const pair<vector<int>, int>&cur : mp) {
    //check if this partition is valid
    if (cur.first.size() + cur.second == n) {
      ans++;
      if (ans == 1) {
        //we found the first answer
        for (int i = 0; i < n; i++) {
          s[i] = '1';
        }
        for (int b : cur.first) {
          s[b - 1] = '0';
        }
      }
    }
  }
  cout << ans << '\n' << s << '\n';
}

int main()
{
#ifndef ONLINE_JUDGE
  freopen("input.txt", "r", stdin);
  freopen("output.txt", "w", stdout);
#endif
  FASTIO;
  //sieve(1000005);
  int t ;
  cin >> t;
  while (t--)
  {
    solve();
  }
  return 0;
}
