#include <bits/stdc++.h>
#include <utility>
using namespace std;
#define int long long
#define fi(i,n) for(int i=0;i<n;i++)
#define f(i, a, b) for(int i=a;i<b;i++)
#define vi vector<int>
#define pb push_back
#define all(x)(x).begin(), (x).end()
#define MOD 1000000007
#define mod 998244353
#define pii pair<int, int>
#define ff first
#define ss second
#define setzero(a) memset(a,0,sizeof(a))
#define prDouble(x) cout<<fixed<<setprecision(10)<<x;
#define SetBits(x) __builtin_popcount(x)
#define eps 0.000001
#define IOS std::ios::sync_with_stdio(false); cin.tie(NULL);cout.tie(NULL);
#define INF 1e18
#define disp(vec, n) fi(i, n) cout << vec[i] << " ";
void solve()
{
    cout<<"Please provide the size of the Snake and Ladder Board"<<endl;
    cout<<"Give The total Count of Snakes and Ladders in the game"<<endl;
    int n,k;
    cin>>n;//size of the board
    cin>>k;//no of snakes and ladders
    int board[n + 1];
    fi(i,n+1)board[i] =-1;
    // this will store snakes and ladders on the board
    cout<<"Now Please provide the postions of snake/Ladder and their corresponding path end"<<endl;
    fi(i,k)
    {
        int pos,place;
        cin>>pos>>place;
        board[pos] = place;
    }
    queue<pair<int,int>>q;
    vector<int>chance;//will store number of minimum chances required to reach point n
    chance.resize(n+1,-1);
    chance[0] = 0;
    q.push({0,0});
    while(!q.empty())
    {
        pair<int,int>p = q.front();
        int v = p.first;
        if(v==n){break;}
        int dis = p.second;
        q.pop();
        for(int i = 1;i<=6;i++)
        {
            int v1 = v + i;
            if(v1>n)break;
            if(board[v1] != -1)
                v1 = board[v1];
            if(chance[v1]!=-1)continue;
            int d1;
            d1 = dis + 1;
            chance[v1] = d1;
            q.push({v1,d1});
        }
    }
    cout<<"No of minimum chances required to reach point "<<n<<"is "<<chance[n]<<endl;
    cout<<"Thank you"<<endl;  

}
int32_t main()
{
    IOS;
    int t = 1;
    //cin>>t;
    while(t--)
    {
        solve();
    }
}