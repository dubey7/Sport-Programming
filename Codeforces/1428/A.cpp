#include<bits/stdc++.h>
#define ll          long long int
#define loop(i,a,b) for(int (i)=(a);(i)<(b);(i)++)
#define rep(i,n)    for(int (i)=0;(i)<n;(i)++)
#define bp          1000000007
#define sz(a)       int((a).size())
#define pb          push_back
#define mp          make_pair
#define all(c)      (c).begin(),(c).end()
#define F           first
#define S           second
using namespace std;
typedef pair<ll,ll> ii;
void solve(){
	int t;
	cin>>t;
	while(t--){
		ii x,y;
		cin>>x.F>>x.S>>y.F>>y.S;
		if(x.F==y.F || x.S==y.S){
			cout<<abs(x.F-y.F) + abs(x.S-y.S)<<endl;
		}
		else{
			cout<<abs(x.F-y.F) + abs(x.S-y.S) + 2<<endl;
		}
	}
}
int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	solve();
	return 0;
}