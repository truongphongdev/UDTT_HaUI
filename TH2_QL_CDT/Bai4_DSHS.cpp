#include<bits/stdc++.h>
using namespace std;

struct	HOCSINH{
	string ten;
	string hoDem;
	int namSinh;
	string diaChi; 
};

void	NhapHS(HOCSINH &hs, string hoDem, string ten, int namSinh, string diaChi){
	hs.ten=ten;
	hs.hoDem=hoDem;
	hs.namSinh=namSinh;
	hs.diaChi=diaChi;
} 

void	fakeData(HOCSINH * danhSach){
	NhapHS(danhSach[0], "Nguyen", "An", 2005, "Hanoi");
    NhapHS(danhSach[1], "Tran", "Bich", 2004, "Da Nang");
    NhapHS(danhSach[2], "Le", "Cuc", 2003, "Ho Chi Minh");
    NhapHS(danhSach[3], "Pham", "Duy", 2006, "Hai Phong");
    NhapHS(danhSach[4], "Hoang", "Linh", 2002, "Can Tho");
}

void Show( HOCSINH * list, int n) {
	cout << setw(15) << left << "Ho Dem"
         << setw(15) << left << "Ten"
         << setw(15) << left << "Nam Sinh"
         << setw(15) << left << "Dia Chi" << endl;
	cout<<"---------------------------------------------------"<<endl;
    for(int i=0;i<n;i++){
    	cout << setw(15) << left << list[i].hoDem
         << setw(15) << left << list[i].ten
         << setw(15) << left << list[i].namSinh
         << setw(15) << left << list[i].diaChi << endl;
	}
}

main(){
	//Danh sach hoc sinh
	HOCSINH list[5];
	
	fakeData(list);
	Show(list,5);
	
	
}
