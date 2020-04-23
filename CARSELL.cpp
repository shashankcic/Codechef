#include <bits/stdc++.h>
using namespace std;

void merge(long long arr[], long long l, long long m, long long r) 
{ 
    long long i, j, k; 
    long long n1 = m - l + 1; 
    long long n2 =  r - m; 
    
    long long L[n1], R[n2]; 
    
    for (i = 0; i < n1; i++) 
        L[i] = arr[l + i]; 
    for (j = 0; j < n2; j++) 
        R[j] = arr[m + 1+ j]; 
  
    i = 0; 
    j = 0; 
    k = l; 
    while (i < n1 && j < n2) 
    { 
        if (L[i] <= R[j]) 
        { 
            arr[k] = L[i]; 
            i++; 
        } 
        else
        { 
            arr[k] = R[j]; 
            j++; 
        } 
        k++; 
    } 
    while (i < n1) 
    { 
        arr[k] = L[i]; 
        i++; 
        k++; 
    } 
    while (j < n2) 
    { 
        arr[k] = R[j]; 
        j++; 
        k++; 
    } 
} 
void mergeSort(long long arr[], long long l, long long r) 
{ 
    if (l < r) 
    { 
        long long m = l+(r-l)/2; 
        mergeSort(arr, l, m); 
        mergeSort(arr, m+1, r); 
        merge(arr, l, m, r); 
    } 
} 

const long long m=1000000007;

int main(){
	int t;
	long long count,n,temp;
	cin>>t;
	for(int p=0;p<t;p++){
		cin>>n;
		count=0;
		long long a[n];
		for(long long i=0;i<n;i++){
			cin>>a[i];
		}
		mergeSort(a,0,n-1);
		temp=n-1;
		while(temp>=0){
			if(a[temp]-(n-temp-1)>0)
				count+=a[temp]-(n-temp-1);
			else
				break;
			temp--;
		}
		cout<<count%m<<endl;
	}	
	return 0;
}
