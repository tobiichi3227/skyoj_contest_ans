#include <bits/extc++.h>
#include <bits/stdc++.h>
using namespace std;

#pragma GCC optimize("Ofast,unroll-loops,no-stack-protector,fast-math")
#pragma GCC target("sse4,avx,avx2,abm,bmi,bmi2,adx,lzcnt,popcnt,tune=native")
#pragma pack(1)

string to_string(string s) { return '"' + s + '"'; }

string to_string(const char *s) { return to_string((string)s); }

string to_string(bool b) { return (b ? "true" : "false"); }

template <typename A, typename B> string to_string(pair<A, B> p) {
  return "(" + to_string(p.first) + ", " + to_string(p.second) + ")";
}

template <typename A> string to_string(A v) {
  bool first = true;
  string res = "{";
  for (const auto &x : v) {
    if (!first) {
      res += ", ";
    }
    first = false;
    res += to_string(x);
  }
  res += "}";
  return res;
}

void debug_out() { cerr << endl; }

template <typename Head, typename... Tail> void debug_out(Head H, Tail... T) {
  cerr << " " << to_string(H);
  debug_out(T...);
}

#ifdef TOBIICHI3227
#define debug(...) cerr << "[" << #__VA_ARGS__ << "]:", debug_out(__VA_ARGS__)
#else
#define debug(...) 3227
#endif

using pii = std::pair<int, int>;
using pll = std::pair<long long, long long>;
using loli = long long int;
using order_multiset =
    __gnu_pbds::tree<int, __gnu_pbds::null_type, less_equal<int>,
                     __gnu_pbds::rb_tree_tag,
                     __gnu_pbds::tree_order_statistics_node_update>;
using order_set =
    __gnu_pbds::tree<int, __gnu_pbds::null_type, less<int>,
                     __gnu_pbds::rb_tree_tag,
                     __gnu_pbds::tree_order_statistics_node_update>;
#define pb push_back
#define eb emplace_back
#define ss second
#define ff first
#define dd cout << '\n';
#define all(container) (container).begin(), (container).end()
#define sz(container) static_cast<int>((container).size())
#define each(x, arr) for (auto &(x) : (arr))
#define c_each(x, arr) for (const auto &(x) : (arr))
#define F_OR(i, a, b, s)                                                       \
  for (int i = (a); (s) > 0 ? i < (b) : i > (b); i += (s))
#define F_OR1(e) F_OR(i, 0, e, 1)
#define F_OR2(i, e) F_OR(i, 0, e, 1)
#define F_OR3(i, b, e) F_OR(i, b, e, 1)
#define F_OR4(i, b, e, s) F_OR(i, b, e, s)
#define GET5(a, b, c, d, e, ...) e
#define F_ORC(...) GET5(__VA_ARGS__, F_OR4, F_OR3, F_OR2, F_OR1)
#define rep(...)                                                               \
  F_ORC(__VA_ARGS__)                                                           \
  (__VA_ARGS__)
#define INF 0x3f

template <typename T, typename U>
std::istream &operator>>(std::istream &is, std::pair<T, U> &val) {
  is >> val.first >> val.second;
  return is;
}
template <typename T>
std::istream &operator>>(std::istream &is, std::vector<T> &arr) {
  for (T &it : arr) {
    is >> it;
  }
  return is;
}

#if __cplusplus >= 201703L
template <typename... T> inline void ccin(T &...args) { ((cin >> args), ...); }
template <typename... T> inline void ccout(T &&...args) {
  ((cout << args), ...);
}
template <typename... T> inline void ccoutl(T &&...args) {
  ((cout << args), ...);
  cout << '\n';
}
#endif

#if __cplusplus <= 201402L
inline void ccin() {}
inline void ccout() {}
inline void ccoutl() { std::cout << "\n"; }

template <typename T, typename... Args> void ccin(T &first, Args &...args) {
  std::cin >> first;
  ccin(args...);
}

template <typename T, typename... Args> void ccout(T &&first, Args &&...args) {
  std::cout << first;
  ccout(args...);
}

template <typename T, typename... Args> void ccoutl(T &&first, Args &&...args) {
  std::cout << first;
  ccoutl(args...);
}
#endif

#define miyuki_is_my_wife_and_sister                                           \
  ios::sync_with_stdio(false), cin.tie(nullptr)

int main() {
  miyuki_is_my_wife_and_sister; // 深雪わ私の妻です

  /*
i += 2
.1.1.1.1.1. n個i與. n - i個空白
............. 13 2*(n+i)+1 n - i - 1空白
.3.3.3.3.3.3.3. n+2*i個3與.
................. 17
.5.5.5.5.5.5.5.5.5. n+2*i個5與.
.................
.3.3.3.3.3.3.3.
.............
.1.1.1.1.1.

*/

  int n;
  cin >> n;
  for (int i = 1; i <= n; i += 2) {
    for (int j = 0; j < n - i; j++)
      cout << " ";
    for (int j = 0; j < (n + i - 1) * 2 + 1; j++) {
      if (j & 1)
        cout << i;
      else
        cout << ".";
    }
    cout << '\n';
    if (i == n)
      break;

    for (int j = 0; j < n - i - 1; j++)
      cout << " ";
    for (int j = 0; j < 2 * (n + i) + 1; j++) {
      cout << ".";
    }
    cout << '\n';
  }

  for (int i = ((n & 1) ? (n - 2) : (n - 1)); i >= 1; i -= 2) {
    if ((!(n & 1) && i != n - 1) || n & 1) {
      for (int j = 0; j < n - i - 1; j++)
        cout << " ";
      for (int j = 0; j < 2 * (n + i) + 1; j++) {
        cout << ".";
      }
      cout << '\n';
    }

    for (int j = 0; j < n - i; j++)
      cout << " ";
    for (int j = 0; j < (n + i - 1) * 2 + 1; j++) {
      if (j & 1)
        cout << i;
      else
        cout << ".";
    }
    cout << '\n';
  }

  return 0;
}

