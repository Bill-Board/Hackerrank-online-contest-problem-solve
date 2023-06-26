//BISMILLAHIR RAHMANIR RAHEEM
//ALLAH IS WATCHING ME
// Shoeb Akibul Islam
// Dept of ICE, NSTU
// https://www.hackerrank.com/contests/srbd-code-contest-2022-round-2-retake/challenges/time-pass
// Problem Name: Time pass

#include<bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
#include <ext/pb_ds/detail/standard_policies.hpp>
#pragma GCC optimize("Ofast")
#pragma GCC target("avx,avx2,fma")
using namespace std;
using namespace __gnu_pbds;

using ll = long long;
using pii= pair<int,int>;

const int N=1000005;
ll mod= 1e9+7;
typedef tree< int, null_type, less<int>, rb_tree_tag,tree_order_statistics_node_update> ott;
typedef tree<pii,null_type,less<pii>,rb_tree_tag,tree_order_statistics_node_update> ordered_multiset;


template <typename T>
struct BIT {
      T n;
      vector <T> Tree;
      void init(T N) {
            n = N;
            Tree = vector <T> (n + 1);
      }
      void update(T pos, T val) {
            while (pos <= n) {
                  Tree[pos] += val;
                  pos += (pos & -pos);
            }
      }
      T query(T pos) {
            T sum = 0;
            while (pos > 0) {
                  sum += Tree[pos];
                  pos -= (pos & -pos);
            }
            return sum;
      }
      T query(T l, T r) {
            return query(r) - query(l - 1);
      }
      void clear_(){ Tree.clear(); }
};

void solve(int tc)
{
    ordered_multiset s;
    BIT<ll> sum, frq;
    sum.init(N);
    frq.init(N);
    int t = 1;
    while(true){
        int x, y; cin >> x;
        if(x == -1)return;
        cin >> y;
        if( x == 1)
            sum.update(y, y), frq.update(y, 1), s.insert({y, t++});
        else if(x == 2){
            if(frq.query(y, y)>0){
                cout << y << '\n';
                frq.update(y, -1);
                sum.update(y, -y);
                auto j = *s.upper_bound({y , -t});
                s.erase(j);
            }
            else
                cout << -1 << '\n';
        }
        else{
            auto pos = *s.find_by_order(y-1);
            ll ans = sum.query(1, pos.first-1);
            ll age = frq.query(1, pos.first-1);
            //cout << "pos " << pos.first << '\n';
            age = max(0ll, y - age);
            ans += (age * pos.first);
            cout << ans << '\n';
        }
//        for(auto i: s)
//            cout << i.first << ' ';
//        cout << "\n\n\n";
    }
}



signed main()
{
    int test_case=1;
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
//    cin >> test_case;
    for(int i = 1; i <= test_case ; i++)
        solve(i);
    return 0;
}



///  Alhamdulillah...
