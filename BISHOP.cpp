//Link:https://www.codechef.com/problems/BISHOP
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
#define FASTIO                      \
  ios_base::sync_with_stdio(false); \
  cin.tie(NULL);                    \
  cout.tie(NULL)


void solve()
{
  int n;
  cin >> n;
  int xi, yi;
  ll ans = 0;
  unordered_map<int, int> mp1, mp2;
  rep(i,n) {
    cin >> xi >> yi;
    mp1[xi + yi]++;
    mp2[xi - yi]++;
  }
  for (auto it : mp1) {
    ans += (it.second * (it.second - 1)) / 2;
  }
  for (auto it : mp2) {
    ans += (it.second * (it.second - 1)) / 2;
  }
  cout << ans << '\n';

}

int main()
{
#ifndef ONLINE_JUDGE
  freopen("input.txt", "r", stdin);
  freopen("output.txt", "w", stdout);
#endif
  FASTIO;
  int t = 1;
  //cin >> t;
  while (t--)
  {
    solve();
  }
  return 0;
}
