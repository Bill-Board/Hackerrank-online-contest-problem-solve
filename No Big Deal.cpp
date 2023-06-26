//BISMILLAHIR RAHMANIR RAHEEM
//ALLAH IS WATCHING ME
// Shoeb Akibul Islam
// Dept of ICE, NSTU
#include<bits/stdc++.h>
using namespace std;

using ll = long long;
using pii= pair<int,int>;

const int N=200005;
ll mod= 1e9+7;
ll n, k, a[N];
vector<vector<ll> >ke_tumi;
void procedure(){
    for(ll i = 0; i<64; i++){
        for(ll j = 1; j<=n; j++){
            ke_tumi[i][j]=ke_tumi[i][j-1];
            if(a[j]&(1ll<<i)){
                ke_tumi[i][j]++;
            }
        }
    }
}

ll ans_hbe_eta_diye(ll l,ll r){
    ll ans=0;
    if(l>r)return 0ll;
    for(ll i = 0; i<64; i++){
        ll onekoita=ke_tumi[i][r]-ke_tumi[i][l-1];
        if(onekoita&1){
            ans+=(1ll<<i);
        }
    }
    return ans;
}
ll nxt(ll x, ll p){
    if(x % p != 0)
        x += (p - (x % p ));
    return x;
}
ll age(ll x, ll p){
    x -= (x % p);
    return x;
}

void solve(int tc)
{
    cin >> n;
    ke_tumi.resize(67,vector<ll>(n+2));
    ll xr = 0;
    for(int i = 1; i<=n; i++)
        cin >> a[i], xr ^= a[i];
    a[++n]=xr;
    procedure();
    ll q , k = n; cin >> q;
    while(q--){
        ll l, r; cin >> l >> r;
        ll ans = 0;

        if(nxt(l, k) > age(r, k)){
            l = l % k ==0 ? k : l % k;
            r = r % k ==0 ? k : r % k;
            //cout << l << " " << r << '\n';
            ans = ans_hbe_eta_diye(l, r);
        }
        else{
            ll l1 = l, r1 = nxt(l, k);
            ll l2 = age(r, k) +1, r2 = r;
            //cout << l1 << " " << r1 << " " << l2 << " " << r2 << '\n';
            l1 = l1 % k ==0 ? k : l1 % k;
            r1 = r1 % k ==0 ? k : r1 % k;
            l2 = l2 % k ==0 ? k : l2 % k;
            r2 = r2 % k ==0 ? k : r2 % k;
            //cout << l1 << " " << r1 << " " << l2 << " " << r2 << '\n';
            if(l2 <= r2)
                ans = ans_hbe_eta_diye(l1, r1) ^ ans_hbe_eta_diye(l2, r2);
            else
                ans = ans_hbe_eta_diye(l1, r1);

        }
        cout << ans << '\n';
        //ll ans1 = ans_hbe_eta_diye()

       // if(l1 > r1)
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
