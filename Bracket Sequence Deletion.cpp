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
    int n, op = 0, i, last = -1;
    string s;
    cin >> n >> s;
    for(i = 0; i<n ; ){
        if(s[i] == '(')
            i+=2, last = i;
        else{
            int j = i+1;
            while(s[j] == '(' and j < n )
                    j++;
            if(j == n){
                cout << op << " " << j - i << endl;
                return;
            }
        }
        op++;
        cout << i << endl;
    }
    cout << op << " " << 0 << endl;

}



signed main()
{
    ll test_case=1;
//    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
//    cin >> test_case;
    while(test_case--)
        solve();
    return 0;
}



///  Alhamdulillah...
