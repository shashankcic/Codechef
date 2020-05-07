#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
	int t;
	ll n, q, s,f,d,count;
	cin>>t;
	for(int p=0;p<t;p++){
		count=0;
		s = 0;
		cin>>n>>q;
		for(int i=0;i<q;i++){
			cin>>f>>d;
			count+= abs(f-s);
			count+= abs(d-f);
			s=d;
		}
		cout<<count<<endl;
	}
}
