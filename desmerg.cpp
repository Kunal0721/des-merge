#include <bits/stdc++.h>
using namespace std;

void desmerge(int a[], int b[], int res[], int m, int n){
	
	//logic of merging of two array in descending order
	int i=0, j=0,k=0;
	while(i<m){
		res[k]= a[i];
		i++;
		k++;
	}
	while(j<n){
		res[k]= b[j];
		j++;
		k++;
	}
	sort(res, res + n + m);
}

int main() {
	int m,n,i;
	int a[10];
	cout<<"Enter the size of first array ";
	cin>>m;
	for(i=0; i<m; i++){
		cin>>a[i];
	}
	int b[10];
	cout<<"Enter the size of second array";
	cin>>n;
	for(i=0; i<n; i++){
		cin>>b[i];
	}
	int res[m+n];
	
	desmerge(a,b,res,m,n);
	cout<<"The new array : \n";
	for (int i=0; i<m+n; i++){
		cout<<" "<<res[i];
		cout<<endl;
	}
	return 0;
}
