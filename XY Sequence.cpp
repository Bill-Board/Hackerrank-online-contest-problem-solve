//BISMILLAHIR RAHMANIR RAHEEM
//ALLAH IS WATCHING ME
// Shoeb Akibul Islam
// Dept of ICE, NSTU
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int N=200005;


int n, x, b, y;
ll alabu(bool ok)
{
    vector < ll > p({0});
    for(int i =0 ; i<n ; i++){
        if(!ok){
            p.push_back(p.back()-y);
            ok = true;
            continue;
        }
        if(p.back()+x <= b)
            p.push_back(p.back()+x);
        else
            p.push_back(p.back()-y);
    }
//    for(auto i: p)
//        cout << i<< " ";
//    cout << endl;
    return accumulate(p.begin(),p.end(), 0ll);
}
void solve()
{
    cin >> n >> b >> x >> y;

    cout << max( alabu( true), alabu(false) ) << endl;
}



signed main()
{
    ll test_case=1;
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    cin >> test_case;
    while(test_case--)
        solve();
    return 0;
}



///  Alhamdulillah...
