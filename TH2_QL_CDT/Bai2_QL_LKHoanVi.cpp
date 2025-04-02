#include<bits/stdc++.h>

using namespace std;

void	Show(int * x, int n){
	for(int i=1;i<=n;i++){
		cout<<x[i]<<" ";
	}
	cout<<endl;
}

void	TRY(int k, int * x, int n, bool * dd){
	for(int i=1;i<=n;i++){
		if(dd[i]==false){
			x[k]=i;
			if(k==n){
				Show(x,n);
			}
			else{
			dd[i]=true;
			TRY(k+1,x,n,dd);
			dd[i]=false;
		}
		}
	}
}



main(){
	int n=4;
	bool *dd ;
	int * x ;
	dd = new bool[n+1];
	x = new int[n+1];
	for(int i=1;i<=n;i++){
		dd[i]=false;
	}
	TRY(1, x, n, dd);
	 
}
