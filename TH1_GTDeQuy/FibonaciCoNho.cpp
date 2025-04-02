#include<bits/stdc++.h>
using namespace std;

long long F[101]={0,1};

//de quy co nho
long long fibonaci(int n){
	if(n<=1)
		return n;
	if(F[n] != 0)
		return F[n];
	return F[n]=fibonaci(n-1)+fibonaci(n-2);
}

//de quy thong thuong
long long fibo(int n){
	if(n<=2)
		return 1;
	else
		return fibo(n-2)+fibo(n-1); 
}


main(){
//	for(int i=0;i<100;i++){
//		cout<<fibonaci(i)<<"\t";
//	}
cout<<""<<fibo(3);
}
