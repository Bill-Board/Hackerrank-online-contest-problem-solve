//BISMILLAHIR RAHMANIR RAHEEM
//ALLAH IS WATCHING ME
// Shoeb Akibul Islam
// Dept of ICE, NSTU
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int N=200005;
vector<int>tom[N];
int dis[N];

void dfs(int ind, int par){
    for(auto i: tom[ind]){
        if(i == par)continue;
        dis[i]=dis[ind] + 1;
        dfs(i, ind);
    }
}


void solve()
{
    int n;
    cin >> n;
    for(int i = 0; i<n-1 ;i++){
        int x, y;
        cin >> x >> y;
        tom[x].push_back(y);
        tom[y].push_back(x);
    }
    dfs(1,0);
//    for(int i =1; i <= n ; i++)
//        cout << dis[i] << " \n"[i==n];
    for(int i = 1; i<=n ; i++)
        if(tom[i].size()==1 and dis[i]&1){
            cout << "no" << endl;
            return;
        }
    cout << "yes" <<endl;
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
