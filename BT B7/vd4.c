#include <stdio.h>
#include <math.h>

void NhapMang(int a[][100], int m, int n){
	int i,j;
	for(i=0; i<m; i++){
		for(j=0; j<n; j++){
			printf("Nhap a[%d][%d] = ", i, j);
			scanf("%d", &a[i][j]);
		}
	}
}

void XuatMang(int a[][100], int m, int n){
	int i,j;
	for(i=0; i<m; i++){ // Duyet cac hang
		for(j=0; j<n; j++){ //  Duyet tung phan tu trong hang i
			printf("%d ", a[i][j]);
		}
		printf("\n");
	}
}
int Tinh( int a[][100], int m, int n){
	int i,j,s=0;
	for(i=0;i<m;i++){
		for(j=0; i<n;j++){
			s+=a[i][j];
		}
	}
	printf("Tong = %d", s);
}

//int snt(int n){
//	int i, dem=0;
//	for(i=1; i <=sqrt(n); i++)
//		if(n % i == 0)
//		dem++;
//}
//
//void In(int a[][100], int m, int n){
//	int i,j;
//	for(i=0; i<m; i++){ 
//		for(j=0; j<n; j++){ 
//		if(snt(a[i][j] == 1))
//		printf("So nguyen to trong mang la: %d", a[i][j]);
		
int TongDuongCheoChinh(int a[][100], int m, int n){
	int v=0, i;
	for(i=0; i<m; i++){
		v+=a[i][i];
	}
	printf("%d", v);
	return 0;
}

//void Sort(int a[][100], int m, int n){
//	int k,j,i;
//	for(k=0; k<m; k++){
//		for(i=0; i<n-1; i++){
//			for(j=i+1; j<n; j++){
//				if(a[k][i] > a[k][j]){
//					int temp = a[k][i];
//					a[k][j] = a[k][i];
//					a[k][j] = temp;				
//				}
//			}
//		}
//	}
//	
//	printf("\n");
//	XuatMang(a,m,n);
//}

int main() {
	int i,j,m,n;
	int a[100][100];
	printf("Nhap so hang: "); scanf("%d", &m);
	printf("Nhap so cot: "); scanf("%d", &n);
	NhapMang(a,m,n);
	XuatMang(a,m,n);
	TongDuongCheoChinh(a,m,n);
	Tinh(a,m,n);
//	In(a,m,n);
//	Sort(a,m,n);
	return 0;
}
