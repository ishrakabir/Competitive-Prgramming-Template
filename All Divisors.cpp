#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using ull = unsigned ll;
using ld = long double;
using pi = pair<int, int>;
using pii = pair<ll, ll>;
using vi = vector<int>;
using vii = vector<ll>;
using vip = vector<pair<int, int>>;

const int MAX_N = 1e5 + 1;
const ll mod = 1e9 + 7;
const ll INF = 1e9;

#define ci cin
#define ell cout << el << el
#define co cout

#define PI 3.141592653589793238
#define w(n) while (n--)
#define fir first
#define sec second
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define pb push_back
#define mp make_pair
#define loop(i, n, x) for (int i = n; i < x; i++)
#define sz(a) ((int)(a).size())
#define st(x) sort(x.begin(), x.end())
#define For(n, x) for (int i = 1; i <= x; i++)
#define ite iterator it
#define fast                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);
#define test     \
    ll t;        \
    cin >> t;    \
    while (t--)  \
    {            \
        solve(); \
    }
#define in insert
#define el endl

vector<int> divisors[1000002];
int sqrt_method(int n)
{
    int cnt = 0, sum = 0;
    for (int i = 1; i * i <= n;i++)
    {
        if(n%i==0)
        {
            cout << i << " " << n / i << el;
            cnt += 1;
            sum += i;
            if(i!=n/i)
            {
                cnt += 1;
                sum += n / i;
            }
        }
    }
    cout << cnt << " " << sum;
}
void Divisors(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = i; j <= n; j += i)
            divisors[j].push_back(i);
    }
}
void solve()
{
    sqrt_method(36);
}

int main()
{
    fast;
    solve();
    //     test;
}
