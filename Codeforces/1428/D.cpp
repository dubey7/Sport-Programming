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
	int n;
	cin>>n;
	vector<int>v,cord;
	rep(i,n){
		int x;
		cin>>x;
		if(x!=0)v.pb(x),cord.pb(i+1);
	}
	vector<ii>ans;
	int a[2][2] =  {0};
	int x=0,y=1;
	rep(i,sz(v)){
		if(v[i]==1){
			if(a[1][1]==0){
				ans.pb(mp(y,cord[x]));
			}
			x++;y++;
			a[1][0] = a[0][1] = a[1][1] = 0;				
		}
		else if(v[i]==2){
			if(a[1][0]==1){
				y++;

			}
			ans.pb(mp(y,cord[x]));
			x++;
			ans.pb(mp(y,cord[x]));
			a[1][0] = a[1][1] = 1;
			a[0][1] = 0;
		}
		else{
			if(a[1][0]==1){
				y++;
			}
			ans.pb(mp(y,cord[x]));
			x++;
			ans.pb(mp(y,cord[x]));
			y++;
			ans.pb(mp(y,cord[x]));
			a[1][0] = 0;
			a[0][1] = a[1][1] = 1;
		}

	}
	cout<<sz(ans)<<endl;
	rep(i,sz(ans)){
		cout<<ans[i].F<<" "<<ans[i].S<<endl;
	}
}
int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	solve();
	return 0;
}