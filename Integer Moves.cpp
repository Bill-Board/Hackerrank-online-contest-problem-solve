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
    int a, b;
    cin >> a >> b;
    if(a==0 and b==0) {
        cout << 0 << endl;
        return;
    }

    int kot = a*a + b*b;
    int sq = sqrt(kot);
    if( sq * sq == kot)
        cout << 1 << endl;
    else
        cout << 2 << endl;

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
