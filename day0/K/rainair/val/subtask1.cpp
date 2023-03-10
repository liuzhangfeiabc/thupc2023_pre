#include "testlib.h"
#include <bits/stdc++.h>

#define fi first
#define se second
#define DB double
#define U unsigned
#define P std::pair
#define LL long long
#define LD long double
#define pb emplace_back
#define pf emplace_front
#define MP std::make_pair
#define SZ(x) ((int)x.size())
#define all(x) x.begin(),x.end()
#define CLR(i,a) memset(i,a,sizeof(i))
#define FOR(i,a,b) for(int i = a;i <= b;++i)
#define ROF(i,a,b) for(int i = a;i >= b;--i)
#define DEBUG(x) std::cerr << #x << '=' << x << std::endl

int main(int argc,char *argv[]){
	registerValidation(argc,argv);

	int n = inf.readInt(1,100000,"n");
	inf.readEoln();
	FOR(i,1,n){
		int x = inf.readInt(1,100000,"ai");
		if(i < n) inf.readSpace();
	}
	inf.readEof();
	return 0;
}
