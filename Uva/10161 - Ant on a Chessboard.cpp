/*
user: caynanvls (http://uhunt.felix-halim.net/id/183008)

problem: UVA 10161 - Ant on a Chessboard
link: http://uva.onlinejudge.org/index.php?option=onlinejudge&page=show_problem&problem=1102
*/
 
# include <iostream>
# include <cstdio>
# include <cstring>
# include <cstdlib>
# include <cmath>
# include <string>
# include <sstream>
 
# include <algorithm>
# include <vector>
# include <queue>
# include <stack>
# include <map>
# include <utility>
# include <functional>
 
 
#define FOR(i, s, e) for(int i=s; i<e; i++)
#define loop(i, n) FOR(i, 0, n)
#define tr(cont, it) for(typeof(cont.begin()) it=cont.begin() ; it != cont.end() ; it++)
#define gi(a) sf("%d", &a)
#define gi2(a, b) sf("%d%d", &a, &b)
#define gi3(a, b, c) sf("%d%d%d", &a, &b, &c)
#define gi4(a, b, c, d) sf("%d%d%d%d", &a, &b, &c, &d)
#define sf scanf
#define pf printf
#define pb push_back
#define MP make_pair
#define ll long long
#define dd double
#define all(v) v.begin(), v.end()
#define PI acos(-1.0)
#define mem(ara, value) memset(ara, value, sizeof(ara))
#define paii pair<int, int>
#define pall pair<ll, ll>
#define SZ(a) int(a.size())
#define read freopen("input.txt", "r", stdin)
#define write freopen("output.txt", "w", stdout)
 
using namespace std;

int main(){
//	read;
//	write;
	int n, x, y;

	while(gi(n), n){
		int root = ceil(sqrt(n));
        int c = root * root - root + 1;
        x = y = root;
        if(root % 2 == 0) {
            if(n > c) y -= n - c;
            else x -= c - n;
        } else {
            if(n > c) x -= n - c;
            else y -= c - n;
        }
        pf("%d %d\n", x, y);
	}

}