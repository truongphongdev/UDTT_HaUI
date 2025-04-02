#include<bits/stdc++.h>

using namespace std;

void Try(int k, int x, int y, int &success, int **H, 
				int n, int *a, int *b){
//Ma dang dung tai o (x, y) tren ban co 
//Tim vi tri cua ma o buoc di thu k
//Neu tim duoc, vi tri cua ma o buoc k la o (u, v)
//success = true neu di thanh cong
    int u, v, suc1; 
    int i = 0;
    do{
        i++; //Moi i la mot vi tri ung cu cua ma o buoc k
        suc1 = 0;
        u = x + a[i];
        v = y + b[i];
        if (1 <= u && u <= n && 1 <= v && v <= n && 
				H[u][v] == 0){
            H[u][v] = k;
            if (k < n*n){ //Chua het cac o trong ban co
                //Di tiep buoc k + 1
				Try(k + 1, u, v, suc1, H, n, a, b);
                if (!suc1) //Khong thanh cong
                    H[u][v] = 0; //quay lui lai buoc k
            }
            else suc1 = 1;
        }
    }
    while(!suc1 && (i < 8)); 
    success = suc1;
}
int main(){
	//buoc di tren ban co theo chieu ngang
	int a[9]= {0, 2, 1, -1, -2, -2, -1, 1, 2}; 
	//buoc di tren ban co theo chieu doc
	int b[9]= {0, 1, 2, 2, 1, -1, -2, -2, -1}; 
	//Hai mang a va b bieu dien 8 vi tri ung cu cua ma
	//o buoc di tiep theo
	int **H; //Mang 2 chieu bieu dien ban co
	int n; //Kich thuoc ban co
    int x, y, suc;
//Khoi tao ban co
    n = 5;
    H = new int*[n+1];
    for (int i=1; i<=n; i++)
    	H[i] = new int[n+1];//calloc(...)
    
	for (int i=1; i<=n; i++)
        for (int j=1; j<=n; j++)
            H[i][j] = 0;
//Chon nuoc di dau tien
	x = 1; y = 1;
	H[x][y] = 1;
	//Thu di tu nuoc di thu 2
    Try(2, x, y, suc, H, n, a, b);
    if (suc) //Thanh cong thi hien thi ban co
        for (int i=1; i<=n; i++){
            for (int j=1; j<=n; j++)
                cout<<H[i][j]<<"\t";
            cout<<endl<<endl;
        }
    else cout<<"Khong tim duoc duong di nao...!";
}

