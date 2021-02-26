/*Author:mp04*/
//Link:https://www.codechef.com/problems/CCBTS02
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

void sieve(int n)
{
  vector<int> v;
  bitset<1000000> b;
  b.set();
  b[0] = b[1] = 0;

  for (int i = 2; i <= n; i++)
  {
    if (b[i] == 1)
    {
      v.pb(i);
      for (int j = i * i; j <= n; j += i)
      {
        b[j] = 0;
      }
    }
  }
  for (int i = 0; i < v.size(); i++)
  {
    cout << v[i] << " ";
  }
  cout << endl;
}

void solve()
{
  int n, f = 0, f1 = 1;
  cin >> n;
  string s;
  for (int i = 0; i < n; i++) {
    cin >> s;
    if (s == "start") {
      f = 1;
    }
    else {
      if (s == "restart") {
        f = 1;
      }
      else {
        if (f == 1 and s == "stop") {
          f = 0;
          continue;
        }
        else {
          f = 0;
          f1 = 0;
        }
      }
    }
  }

  if (f1 == 0)
    cout << 404 << '\n';
  else
    cout << 200 << '\n';
}

int main()
{
#ifndef ONLINE_JUDGE
  freopen("input.txt", "r", stdin);
  freopen("output.txt", "w", stdout);
#endif
  FASTIO;
  int t  ;
  cin >> t;
  while (t--)
  {
    solve();
  }
  return 0;
}
