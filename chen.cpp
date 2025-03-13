#include<iostream>
using namespace std;

void	nhap(int &n){
	cout<<"nhap vao phan tu cua mang:";
	cin>>n;
}

void	nhapmang(int * a,int n){
	for(int i=0;i<n;i++){
		cout<<"a["<<i<<"]=";
		cin>>a[i];
	}
}

void	xuatmang(int * a, int n){
	for(int i=0;i<n;i++){
		cout<<a[i]<<"\t";
	}
}

void	chen(int * a, int &n, int x, int k){
	
}

void	thamtri(int a,int b){
	int tg=a;
	a=b;
	b=tg;
}

main(){
//	int * a=new int[100];
	
	int a=7;
	int b=5;
	thamtri(a,b);
	cout<<a<<"   "<<b;
	
	
	
}
