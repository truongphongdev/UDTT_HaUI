#include<bits/stdc++.h>
using namespace std;

long long	OddSum(int * a,int n){
	if(n<=0)
		return 0;
	else{
		if(a[0]%2 != 0){
			return a[0]+OddSum(a+1,n-1);
		}
		else
			return OddSum(a+1,n-1);
	}
}

main(){
	int a[]={2,3,3,2,3,3};
	cout<<OddSum(a,6);
}  
