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
int n,k;
bool p(vector<ll>&v, int lim){
	int part =0;
	for(auto x:v){
		part += x/lim;
		if(x%lim!=0)part++;
	}
	return part<=k;
}
void solve(){
	cin>>n>>k;
	vector<ll>v(n);
	rep(i,n)cin>>v[i];
	sort(all(v));
	ll low = 1;
	ll high = v[n-1];
	while(low<high){
		int mid = (low+high)/2;
		if(p(v,mid)){
			high = mid;
		}
		else{
			low = mid+1;
		}
	}
	multiset<ll>s;
	rep(i,n){
		rep(j,v[i]/low)s.insert(-low);
		if(v[i]%low!=0)s.insert(-(v[i]%low));
	}
	while(sz(s)<k){
		// cout<<sz(s)<<",";
		int elem = *s.begin();
		s.erase(s.begin());
		s.insert(elem/2);
		s.insert(elem - elem/2);
	}
	

	ll ans =0;
	for(auto elem:s){
		ans += elem*elem;
	}
	cout<<ans<<endl;


}
int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	solve();
	return 0;
}