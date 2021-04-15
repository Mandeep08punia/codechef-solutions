
//Link:https://www.codechef.com/CCHI2021/problems/CCBTS03
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


void solve()
{
  int n, k;
  cin >> n >> k;
  int a[n], mini, maxi, diff;
  rep(i,n)
    cin >> a[i];
  sort(a, a + n);
  mini = a[0];
  maxi = a[k - 1];
  diff = maxi - mini;
  for (int i = k; i < n; i++) {
    maxi = a[i];
    mini = a[i - k + 1];
    diff = min(diff, maxi - mini);
  }
  cout << diff << '\n';
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
  w (t)
  {
    solve();
  }
  return 0;
}
