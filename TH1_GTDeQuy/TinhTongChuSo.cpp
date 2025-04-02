#include<bits/stdc++.h>
using namespace std;

long	SumDigits(int n){
	if(n==0)
		return 0;
	else 
		return n%10+SumDigits(n/10);
}

main(){
	cout<<SumDigits(88);
}
