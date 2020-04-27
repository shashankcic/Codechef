#include <bits/stdc++.h>
using namespace std;

int main(){
	int t;
	long int n;
	scanf("%d",&t);
	for(int p=0;p<t;p++){
		scanf("%ld",&n);
		if(n==1){
		    printf("1\n");
		}
		else{
			printf("%ld\n",n/2);
		}
		if(n==1){
			printf("1 1\n");
		}
		else if(n<=3){
			printf("%ld ",n);
			for(int i=1;i<=n;i++){
				printf("%d ",i);
			}
			printf("\n");
		}
		else if(n%2!=0){
		    printf("3 1 2 %ld\n",n);
			for(long int i=3;i<n;i+=2){
			    printf("2 %ld %ld\n",i,i+1);
			}
		}
		else{
			for(int i=1;i<n;i+=2){
			    printf("2 %ld %ld\n",i,i+1);
			}
		}
	}
	return 0;
}
