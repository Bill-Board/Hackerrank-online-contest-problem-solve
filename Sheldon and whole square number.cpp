//BISMILLAHIR RAHMANIR RAHEEM
//ALLAH IS WATCHING ME
// Shoeb Akibul Islam
// Dept of ICE, NSTU
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int N=100005;


void solve()
{
    int n;
    cin >> n;
    map<int , int> mpp;
    for(int i = 2; i*i<=n ; i++){
        int koita = 0;
        while(n % i == 0){
            n/=i; koita++;
        }
        if(koita)mpp[i]=koita;
    }
    if(n>1)mpp[n]++;
    int cr_h = 1;
    for(auto i: mpp)
        if(i.second&1)cr_h *= i.first;
    cout << cr_h << endl;


}



signed main()
{
    ll test_case=1;
//    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    cin >> test_case;
    while(test_case--)
        solve();
    return 0;
}



///  Alhamdulillah...
