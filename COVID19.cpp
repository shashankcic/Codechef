#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	int t,n,x[10],tcount,lcount,hcount;
	cin>>t;
	for(int p=0;p<t;p++){
		lcount=10;
		hcount=0;
		tcount=1;
		cin>>n;
		for(int i=0;i<n;i++){
			cin>>x[i];
		}
		for(int i=0;i<n;i++){
			if(i>0){
				if(x[i]-x[i-1]<3){
					tcount++;
				}
				else{
					lcount=min(lcount,tcount);
					hcount=max(hcount,tcount);
					tcount=1;
				}
			}
		}
		lcount=min(lcount,tcount);
		hcount=max(hcount,tcount);
		cout<<lcount<<" "<<hcount<<endl;		

	}
	return 0;
}
