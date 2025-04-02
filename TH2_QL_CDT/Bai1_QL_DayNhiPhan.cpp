#include<bits/stdc++.h>

using namespace std;

void	Show(int * x,int n){
	for(int i=1;i<=n;i++){
		cout<<x[i];
	}
	cout<<endl;
} 


void	Try(int * x,int k, int n) {
	for(int i=0;i<=1;i++){
		x[k]= i;
		if(k==n){
			Show(x,n);
		}
		else
			Try(x,k+1,n);
	}
}



main(){
	int n=4;
	int * x= new int[n+1];
	Try(x,1,n);
}
