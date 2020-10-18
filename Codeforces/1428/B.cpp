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
	string s;
	cin>>s;
	map<char,int>m;
	for(int i=0;i<n;i++){
		if(s[i]!='-' && s[(i-1+n)%n]=='-')m['-']++;
		if(m.find(s[i])==m.end())
			m[s[i]]=1;
		else
			m[s[i]]++;
	}
	if(m['<']==0 || m['>']==0){
		cout<<n<<endl;
	}
	else{
		cout<<m['-']<<endl;
	}
}
int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	int t;
	cin>>t;
	while(t--)
		solve();
	return 0;
}