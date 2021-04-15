//Link:https://www.codechef.com/CWRS2021/problems/BP35
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
#define bg(vc) vc.begin()
#define ed(vc) vc.end()
#define gc getchar_unlocked
#define ms(i, j) memset(i, j, sizeof i)
#define w(t) while (t--)
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

void solve()
{
  int a, x, y, z;
  cin >> a >> x >> y >> z;
  int b[x], c[y], d[z];
  rep(i,x)
    cin >> b[i];
  rep(i,y)
    cin >> c[i];
  rep(i,z)
    cin >> d[i];

  sort(b, b + x);
  sort(c, c + y);
  sort(d, d + z);
  if (d[0] + b[0] + c[0] > a) {
    cout << -1;
    return;
  }
  vector<int> v;
  int mini = INT_MAX, amount;
  rep(i,x) {
    for (int j = 0; j < y; j++) {
      amount = a - b[i] - c[j];
      if (amount > 0) {
        auto k = lower_bound(d, d + z, amount) - d;
        if (k < z && d[k] == amount) {
          // amount found at index k
          cout << 0 << '\n';
          return;
        }
        else {
          if (k <= z and k > 0) {
            k--;
            v.push_back(amount - d[k]);
          }
        }
      }
    }
  }
  rep(i,v.size()) {
    mini = min(mini, v[i]);
  }
  cout << mini << '\n';
  return;
}

int main()
{
#ifndef ONLINE_JUDGE
  freopen("input.txt", "r", stdin);
  freopen("output.txt", "w", stdout);
#endif
  FASTIO;
  int t = 1 ;
  //cin >> t;
  while (t--)
  {
    solve();
  }
  return 0;
}
