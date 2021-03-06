///https://codeforces.com/contest/1324/problem/F

#include<bits/stdc++.h>
using namespace std;

#define          FaRaBi                 ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define          ll                     long long int
#define          ld                     long double
#define          ull                    unsigned long long int
#define          pii                    pair < int, int>
#define          pll                    pair < ll, ll>
#define          MOD                    1000000007
#define          ff                     first
#define          ss                     second
#define          pb                     push_back
#define          eb                     emplace_back
#define          sc                     scanf
#define          pf                     printf
#define          scin(x)                scanf("%d",&(x))
#define          scin2(x,y)             scanf("%d %d",&(x),&(y))
#define          scin3(x,y,z)           scanf("%d %d %d",&(x),&(y),&(z))
#define          scln(x)                scanf("%lld",&(x))
#define          scln2(x,y)             scanf("%lld %lld",&(x),&(y))
#define          scln3(x,y,z)           scanf("%lld %lld %lld",&(x),&(y),&(z))
#define          min3(a,b,c)            min(a,min(b,c))
#define          min4(a,b,c,d)          min(d,min(a,min(b,c)))
#define          max3(a,b,c)            max(a,max(b,c))
#define          max4(a,b,c,d)          max(d,max(a,max(b,c)))
#define          ms(a,b)                memset(a,b,sizeof(a))
#define          mp                     make_pair
#define          gcd(a, b)              __gcd(a,b)
#define          lcm(a, b)              ((a)*(b)/gcd(a,b))
//#define          input                  freopen("input.txt","rt", stdin)
//#define          output                 freopen("output.txt","wt", stdout)
#define          PI                     acos(-1.0)
#define          zero(a)                memset(a,0,sizeof a)
#define          all(v)                 v.begin(),v.end()
#define          Max(v)                 *max_element(all(v))
#define          Min(v)                 *min_element(all(v))
#define          Upper(c,x)             (upper_bound(c.begin(),c.end(),x)-c.begin())
#define          Lower(c,x)             (lower_bound(c.begin(),c.end(),x)-c.begin())
#define          Unique(X)              (X).erase(unique(all(X)),(X).end())
#define          no                     cout << "NO" << endl ;
#define          yes                    cout << "YES" << endl ;
#define          DBG                    cout << endl << "---------------" << endl ;
#define segment_tree int Lnode = node << 1 , Rnode = Lnode + 1 , mid = ( b + e ) >> 1 ;


vector < ll > v, v1, v2, v3 ;
vector < pll > vec ;
vector < ll > adj[ 200005 ] ;
map < ll, ll > Mp ;
set < ll > st, st1,st2 ;
queue < ll > Q ;
stack < ll > Stk ;
multiset < pll > S ;


ll t, T, n, m, a, b, q ;
string s ;
int dp[ 200005 ] ;
int ans[ 200005 ] ;

void Reset() {}

void dfs1( int u, int par )
{
    for( auto v : adj[ u ] )
    {
        if( v != par )
        {
            dfs1( v, u ) ;
            dp[ u ] += max( 0, dp[ v ] ) ;
        }
    }
}

void dfs2( int u, int par, int add )
{
    ans[ u ] = dp[ u ] + add ;
    for( auto v : adj[ u ] )
    {
        if( v != par )
        {
            dfs2( v, u, max( 0, ans[ u ] - max( 0, dp[ v ] ) ) ) ;
            //dfs2( v, u, max( 0, add + dp[ u ] - max( 0, dp[ v ] ) ) ) ;
        }
    }
}

void Input()
{
    cin >> n ;
    for( int i = 1 ; i <= n ; i ++ )
    {
        cin >> dp[ i ] ;
        if( !dp[ i ] ) dp[ i ] -- ;
    }

    for( int i = 1 ; i < n ; i ++ )
    {
        cin >> a >> b ;
        adj[ a ].pb( b ) ;
        adj[ b ].pb( a ) ;
    }
}

void Calculation()
{
    dfs1( 1, 1 ) ;
    dfs2( 1, 1, 0 ) ;

    for( int i = 1 ; i <= n ; i ++ )
    {
        cout << ans[ i ] << " " ;
    }
}


void solve()
{
    Reset() ;
    Input() ;
    Calculation() ;
}

int main()
{
    FaRaBi ;
    t = 1 ;
    while( t-- )
    {
        T ++ ;
        solve() ;
    }

    return 0 ;
}

---------------------------------*******************------------------------------------------
 ///https://codeforces.com/contest/1092/problem/F?fbclid=IwAR3xRx6jTkF4-JYGIwRnyYjK4tRHmfHOrK1rfT6vYrFmDIvTcdg3BLMMJLE

#include<bits/stdc++.h>
using namespace std;

#define          FaRaBi                 ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define          ll                     long long int
#define          ld                     long double
#define          ull                    unsigned long long int
#define          pii                    pair < int, int>
#define          pll                    pair < ll, ll>
#define          MOD                    1000000007
#define          ff                     first
#define          ss                     second
#define          pb                     push_back
#define          eb                     emplace_back
#define          sc                     scanf
#define          pf                     printf
#define          scin(x)                scanf("%d",&(x))
#define          scin2(x,y)             scanf("%d %d",&(x),&(y))
#define          scin3(x,y,z)           scanf("%d %d %d",&(x),&(y),&(z))
#define          scln(x)                scanf("%lld",&(x))
#define          scln2(x,y)             scanf("%lld %lld",&(x),&(y))
#define          scln3(x,y,z)           scanf("%lld %lld %lld",&(x),&(y),&(z))
#define          min3(a,b,c)            min(a,min(b,c))
#define          min4(a,b,c,d)          min(d,min(a,min(b,c)))
#define          max3(a,b,c)            max(a,max(b,c))
#define          max4(a,b,c,d)          max(d,max(a,max(b,c)))
#define          ms(a,b)                memset(a,b,sizeof(a))
#define          mp                     make_pair
#define          gcd(a, b)              __gcd(a,b)
#define          lcm(a, b)              ((a)*(b)/gcd(a,b))
//#define          input                  freopen("input.txt","rt", stdin)
//#define          output                 freopen("output.txt","wt", stdout)
#define          PI                     acos(-1.0)
#define          zero(a)                memset(a,0,sizeof a)
#define          all(v)                 v.begin(),v.end()
#define          Max(v)                 *max_element(all(v))
#define          Min(v)                 *min_element(all(v))
#define          Upper(c,x)             (upper_bound(c.begin(),c.end(),x)-c.begin())
#define          Lower(c,x)             (lower_bound(c.begin(),c.end(),x)-c.begin())
#define          Unique(X)              (X).erase(unique(all(X)),(X).end())
#define          no                     cout << "NO" << endl ;
#define          yes                    cout << "YES" << endl ;
#define          DBG                    cout << endl << "---------------" << endl ;
#define segment_tree int Lnode = node << 1 , Rnode = Lnode + 1 , mid = ( b + e ) >> 1 ;


///sum accumulate( v.begin(), v.begin() + k, 0LL )
///bool operator < ( const Node& p ) const{ return cost < p.cost ; }
///priority_queue<int,vector<int>,greater<int> >pq;
///std::set<ll, std::greater<ll> > Set;
///string str = "abcdefghijklmnopqrstuvwxyz";
///string s2 = "ABCDEFGHIJKLMNOPQRSTUVWXYZ" ;
///string s = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ" ;
///string s = std::bitset<64>(n).to_string();
///---------------Order set-------------------
///template<typename T> using orderset =tree<T,null_type,less<T>,rb_tree_tag,tree_order_statistics_node_update>;
///#include <ext/pb_ds/assoc_container.hpp>
///using namespace __gnu_pbds;
///*os.find_by_order(index) os.order_of_key(value)

///--------------Graph Moves--------------------------------------
///const int fx[] = {+1,-1,+0,+0};
///const int fy[] = {+0,+0,+1,-1};
///const int fx[] = {+0,+0,+1,-1,-1,+1,-1,+1}; ///King's move
///const int fy[] = {-1,+1,+0,+0,+1,+1,-1,-1}; ///king's Move
///const int fx[] = {-2,-2,-1,-1,+1,+1,+2,+2}; ///knight's move
///const int fy[] = {-1,+1,-2,+2,-2,+2,-1,+1}; ///knight's move
///---------------------------------------------------------------


vector < ll > v, v1, v2, v3 ;
vector < pll > vec ;
vector < ll > adj[ 200005 ] ;
map < ll, ll > Mp ;
set < ll > st, st1,st2 ;
queue < ll > Q ;
stack < ll > Stk ;
multiset < pll > S ;


ll t, T, n, m, a, b, q, res, ans ;
string s ;
ll dp[ 200005 ] ;

void Reset() {}

void dfs1( int u, int par , int level )
{
    res += level * dp[ u ] ;

    for( auto v : adj[ u ] )
    {
        if( v != par )
        {
            dfs1( v, u, level + 1 ) ;
            dp[ u ] += dp[ v ] ;
        }
    }
}


void dfs2( int u, int par )
{
    ans = max( ans , res ) ;
    for( auto v : adj[ u ] )
    {
        if( v != par )
        {
            ll temp = res ;
            ll niche = dp[ v ] ;
            ll upore = dp[ 1 ] - dp[ v ] ;
            res += upore ;
            res -= niche ;
            // cout << v << " " << upore << " " << niche << " " << res << endl;
            dfs2( v, u ) ;
            res = temp ;
        }
    }
}

void Input()
{
    cin >> n ;
    for( int i = 1 ; i <= n ; i ++ )
    {
        cin >> dp[ i ] ;
    }

    for( int i = 1 ; i < n ; i ++ )
    {
        cin >> a >> b ;
        adj[ a ].pb( b ) ;
        adj[ b ].pb( a ) ;
    }
}

void Calculation()
{
    dfs1( 1, 1, 0 ) ;
    dfs2( 1, 1 ) ;

    cout << ans << endl ;
}


void solve()
{
    Reset() ;
    Input() ;
    Calculation() ;
}

int main()
{
    FaRaBi ;
    t = 1 ;
    while( t-- )
    {
        T ++ ;
        solve() ;
    }

    return 0 ;
}




