#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	ll t,n,q,count,temp;
	ll ch[26], cen[100000];
	string s;
	cin>>t;
	for(ll p=0;p<t;p++){
		cin>>n>>q;
		cin>>s;
		for(ll i=0;i<q;i++) {
			cin>>cen[i];
		}
		for(int i=0;i<26;i++){
			ch[i]=0;
		}
		for(ll i=0;i<n;i++){
			ch[int(s[i]-'a')]++;
		}
		for(ll i=0;i<q;i++) {
			count=0;
			for(int j=0;j<26;j++){
				if(ch[j]>cen[i]){
					count+=ch[j]-cen[i];
				}
			}
			cout<<count<<endl;	
		}
		//ch.clear();
		//cen.clear();
	}
	return 0;
}
