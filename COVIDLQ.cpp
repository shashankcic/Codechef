#include <bits/stdc++.h>
using namespace std;
int main(){
	int t,n,a[100],temp;
	bool flag= false;
	cin>>t;
	for(int p=0;p<t;p++){
		cin>>n;
		flag=false;
		for(int i=0;i<n;i++){
			cin>>a[i];
		}
		for(int i=0;i<n;i++){
			if(i+5>=n)
				temp=n-1;
			else
				temp=i+5;
			if(a[i]==1){
				for(int j=i+1;j<=temp;j++){
					if(a[j]==1)
						flag=true;
				}
			}	
		}
		if(flag==true){
			cout<<"NO"<<endl;
		}
		else{
			cout<<"YES"<<endl;
		}
	}
	return 0;
}
