//BISMILLAHIR RAHMANIR RAHEEM
//ALLAH IS WATCHING ME
// Shoeb Akibul Islam
// Dept of ICE, NSTU
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int N=200005;

void solve()
{
    string s;
    int n , sum =0;
    cin >> s >> n;
    if(n==0){
        cout << "NO" << endl;
        return;
    }
    for(auto i: s)
        sum = (10*sum + (i-'0') )%n;
    if(sum)
        cout << "NO" << endl;
    else
        cout << "YES" << endl;
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
