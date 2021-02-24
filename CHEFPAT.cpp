/*Author:mp04*/
//Link:https://www.codechef.com/problems/CHEFPAT
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
bool compare(pair<int, int> a, pair<int, int> b) {
  if (a.first > b.first)
    return true;
  else if (a.first < b.first)
    return false;
  else if (a.second < b.second)
    return true;
  else return false;
}
void solve()
{
  int n;
  cin >> n ;
  pair<int, int> a[n], ar[n];

  for (int i = 0; i < n; i++)
  {
    cin >> a[i].first;
    a[i].second = i;
    ar[i].first = a[i].first;
  }
  sort(a, a + n, compare);
  for (int i = 0; i < n; i++) {
    ar[a[i].second].second = i + 1;
  }
  for (int i = 0; i < n; i++) {
    cout << ar[i].second << " ";
  }
  cout << '\n';
}

int main()
{
#ifndef ONLINE_JUDGE
  freopen("input.txt", "r", stdin);
  freopen("output.txt", "w", stdout);
#endif
  FASTIO;
  int t ;
  cin >> t;
  while (t--)
  {
    solve();
  }
  return 0;
}
