#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
	int t, n, s, p[100], d[100], fmin,dmin;
	cin>>t;
	for(int m=0;m<t;m++){
		cin>>n>>s;
		fmin=101;
		dmin=101;
		for(int i=0;i<n;i++){
			cin>>p[i];
		}
		for(int i=0;i<n;i++){
			cin>>d[i];
		}
		for(int i=0;i<n;i++){
			if(d[i]==0){
				if(dmin>p[i]){
					dmin=p[i];
				}
			}
			else{
				if(fmin>p[i]){
					fmin=p[i];
				}
			}
		}
		if(s+fmin+dmin<=100){
			cout<<"yes"<<endl;
		}
		else{
			cout<<"no"<<endl;
		}
	}
	return 0;
}
