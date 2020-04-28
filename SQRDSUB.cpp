#include <bits/stdc++.h>
using namespace std; 
   
long long diff(long long a[], long long n) 
{  
    unordered_map<long long, long long> map; 
    long long count = 0,twos = 0;
    for (long long i = 0; i < n; i++) {  
        twos += a[i]; 
        if (twos == 1)
        {
        	count++;
		}         
        if (map.find(twos - 1)!=map.end())
		{
			count += (map[twos - 1]);
		}  
        map[twos]++; 
    } 
    return count; 
} 
  
int main() 
{
	int t;
	long long n;
	cin>>t;
	for(int p=0;p<t;p++)
	{
	    cin>>n;
	    long long a[n];
	    for(long long i=0;i<n;i++)
		{
	        cin >> a[i];
	        if(a[i]%4==0){
	        	a[i]=4;	
			}
	        else if(a[i]%2==0){
	        	a[i]=1;	
	        }
	        else{
				a[i] = 0;	
			} 
	    }
	    long long subArr = (n*(n+1))/2;
	    cout<<subArr-diff(a,n)<<endl;
	}
    return 0; 
}
