#include <bits/stdc++.h>
using namespace std;

const long long m=1000000007;

long long factorize(long long n){
 	long long count = 0;
   	while (!(n % 2)) {
      	n/= 2;
      	count++;
   	}
   	for (long long i = 3; i <= sqrt(n); i += 2) {
    	while (n % i == 0) {
        count++;
        n = n / i;
     	}
   	}
   	if (n > 2)
   		count++;
   	return count;
}

int main(){
	int t;
	long long x,k;
	cin>>t;
	for(int p=0;p<t;p++){
		cin>>x>>k;
		if(x>k)
			if(k<=factorize(x))
				cout<<1<<endl;
			else
				cout<<0<<endl;
		else
			cout<<0<<endl;
	}
	return 0;
}
