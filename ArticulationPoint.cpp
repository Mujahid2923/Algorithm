///...................................*****.................................................///
///                  Mujahidul Islam ( mujahidulislam2923@gmail.com )                       ///
///                  Department of Ict                                                      ///
///                  Comilla University , Bangladesh.                                       ///
///...................................*****.................................................///

#include<bits/stdc++.h>
using namespace std;

#define           CIN              ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define           ll               long long int
#define           ull              unsigned long long int
#define           pii              pair < int, int>
#define           pll              pair < ll, ll>
#define           MOD              1000000007
#define           vi               vector<int>
#define           vl               vector<ll>
#define           pb               push_back
#define           sc               scanf
#define           pf               printf
#define         scin(x)            scanf("%d",&(x))
#define        scin2(x,y)          scanf("%d %d",&(x),&(y))
#define         scln(x)            scanf("%lld",&(x))
#define        scln2(x,y)          scanf("%lld %lld",&(x),&(y))
#define       min3(a,b,c)          min(a,min(b,c))
#define       min4(a,b,c,d)        min(d,min(a,min(b,c)))
#define       max3(a,b,c)          max(a,max(b,c))
#define       max4(a,b,c,d)        max(d,max(a,max(b,c)))
#define         ms(a,b)            memset(a,b,sizeof(a))
#define           mp               make_pair
#define       gcd(a, b)            __gcd(a,b)
#define       lcm(a, b)            ((a)*(b)/gcd(a,b))
#define         input              freopen("input.txt","rt", stdin)
#define         output             freopen("output.txt","wt", stdout)
#define           PI               2*acos(0.0)
#define     rep( i , a , b )       for( i=a ; i<b ; i++)
#define     rev( i , a , b )       for( i=a ; i>=b ; i--)
#define     repx( i ,a,b, x)       for( i=a ; i<b ; i+=x)
#define       CASEL(t)             printf("Case %d:\n",t)
#define     RUN_CASE(t,T)          for(__typeof(t) t=1;t<=T;t++)
#define        zero(a)             memset(a,0,sizeof a)

///priority_queue<int,vector<int>,greater<int> >pq;
///--------------Graph Moves--------------------------------------
///const int fx[] = {+1,-1,+0,+0};
///const int fy[] = {+0,+0,+1,-1};
///const int fx[] = {+0,+0,+1,-1,-1,+1,-1,+1}; ///King's move
///const int fy[] = {-1,+1,+0,+0,+1,+1,-1,-1}; ///king's Move
///const int fx[] = {-2,-2,-1,-1,+1,+1,+2,+2}; ///knight's move
///const int fy[] = {-1,+1,-2,+2,-2,+2,-1,+1}; ///knight's move
///---------------------------------------------------------------

int node, edge, cnt = 0 ;
vector< int > adj[ 200005 ] ;
int AP[ 200005 ] ,dist[ 200005 ] ,low[ 200005 ] ;


int dfs( int u, int p )
{
    dist[ u ] = low[ u ] = ++ cnt ;
    int children = 0 ;

    for( auto v : adj[ u ] )
    {
        if( v != p )
        {
            if( !dist[ v ] )
            {
                children ++ ;
                dfs( v, u ) ;
                if( dist[ u ] <= low[ v ] ) AP[ u ] = 1 ; /// if this node has a connection whit another that is situated on the upper part ( or starting time is less )
                low[ u ] = min( low[ u ], low[ v ] ) ;    /// we keep tracking the lowest time connced with that node
            }
            else low[ u ] = min( low[ u ], dist[ v ] ) ;  
        }
    }
    return children ;  /// only for the the root ( if it has children more than one then it is ap
}

int main()
{
    int a, b ;
    cin >> node >> edge ;
    for( int i = 0 ; i < edge ; i ++ )
    {
        cin >> a >> b ;
        adj[ a ].pb( b ) ;
        adj[ b ].pb( a ) ;
    }

    for( int i = 0 ; i <= node ; i ++ )
    {
        if( !dist[ i ] )
        {
            AP[ i ] = dfs( i, i ) > 1 ;
        }
    }

    for( int i = 0 ; i <= node ; i ++ )
    {
        if( AP[ i ] == 1 )
        {
            cout << i << " " ;
        }
    }

    return 0;
}

/*
8 9
1 2
1 3
2 3
3 4
4 5
5 6
5 7
6 7
6 8
output : 3 4 5 6


7 7
1 2
1 3
3 4
3 7
4 5
4 6
6 7
Out : 1 3 4
*/

///https://codeforces.com/blog/entry/71146

