using namespace std;
#include<iostream>
#include<string>
#include<sstream>
#include<vector>
#include<algorithm>
#include<set>
#include<map>

#include<cmath>
#include<cstdio>
#include<cstdlib>
#define For(i,n) for(int i=0;i<(n);++i)
#define foreach(x,n) for(typeof (n).begin() x = (n).begin(); x!= (n).end(); x++)
#define all(x) x.begin(),x.end()
#define rall(x) x.rbegin(),x.rend()
#define D(x) cout<<#x " = "<<(x)<<endl

template <class T> string toStr(const T &x)
{ stringstream s;s<<x;return s.str();}
template <class T> int toInt(const T &x)
{ stringstream s; s<<x; int r; s>>r;return r;}

typedef long long int lli;

lli modpow(lli b,lli p,lli m ){
	lli mask = 1;
	lli pow2 = b%m;
	lli r =1;
	while(mask){
		if(p & mask) r =  (r * pow2)%m;
		pow2 = (pow2*pow2)%m;
		mask<<=1;
	}
	return r;
}

int main(){
	lli a;
	while(cin>>a and a){
		long double b = a;
		long double c = ceil(sqrt(2.0*a + 0.25) -0.5);
		cout<<(( ((c*(c+1))/2) == b)?"SI":"NO")<<endl;
	}

	return 0;
}
