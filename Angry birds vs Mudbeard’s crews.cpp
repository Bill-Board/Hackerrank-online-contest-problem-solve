//BISMILLAHIR RAHMANIR RAHEEM
//ALLAH IS WATCHING ME
// Shoeb Akibul Islam
// Dept of ICE, NSTU
//https://www.hackerrank.com/contests/srbd-code-contest-2022-round-2-retake/challenges/angry-birds-vs-mudbeards-team
// Problem anme: angry birds
#include<bits/stdc++.h>
using namespace std;

using ll = long long;
using pii= pair<int,int>;

const int N=205;
ll mod= 1e9+7;
int fx[4]= {1,-1,0,0};
int fy[4]= {0,0,1,-1};
char a[N][N], b[N][N];
int n, m, visi[N][N];
bool ok(int x, int y){
    return 0<x and x<=n and 0<y and y<=m and visi[x][y]==0;
}

void dfs(int indx, int indy){
    visi[indx][indy] = 1;
    for(int i = 0; i<4; i++){
        int x = indx+fx[i], y  = indy + fy[i];
        if(ok(x, y) and a[x][y]!= '#')
            dfs(x, y);
    }
}

void solve(int tc)
{
    cin >> n >> m;
    int x=-1, y;
    vector<pii> p;
    for(int i = 1; i<=n; i++)
        for(int j = 1; j<=m; j++){
            cin >> a[i][j]; b[i][j] = a[i][j];
            visi[i][j] = 0;
            if(a[i][j] == 'c')
                p.push_back({i,j});
        }
    for(auto i: p){
        a[i.first][i.second] = '#';
        for(int k = 0; k<4; k++)
            a[i.first+fx[k]][i.second+fy[k]]= '#';
    }
    cout << "Case "<< tc << ": " ;
    for(int i = 1; i<=n; i++)
        for(int j = 1; j<=m; j++){
            if(a[i][j] != b[i][j] and b[i][j] == 'b'){
                cout << "no\n";
                return;
            }
            if(a[i][j] == 't')
                x = i, y = j;
        }

    if(x == -1){
        cout << "no\n";
        return;
    }
    dfs(x, y);

//    for(int i = 1; i<=n; i++)
//        for(int j = 1; j<=m; j++)
//            cout << a[i][j] << " \n"[j == m];
//    for(int i = 1; i<=n; i++)
//        for(int j = 1; j<=m; j++)
//            cout << visi[i][j] << " \n"[j == m];



    for(int i = 1; i<=n; i++)
        for(int j = 1; j<=m; j++){
            if(a[i][j] == 'b' and visi[i][j]==0){
                cout << "no\n";
                return;
            }
        }


    cout << "yes\n";


}



signed main()
{
    int test_case=1;
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    cin >> test_case;
    for(int i = 1; i <= test_case ; i++)
        solve(i);
    return 0;
}



///  Alhamdulillah...
