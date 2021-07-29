#include <stdio.h>
#include <conio.h>

void NhapMang(int a[], int n){
	int i;
	for(i=0 ;i<n ;i++){
		printf("Nhap phan tu a[%d]: ",i);
		scanf("%d",&a[i]);
	}
}

float TBC(int a[], int n){
	int i;
	int tong=0, dem=0;
	for(i=0; i<n ; i++){
		if(a[i]%3==0 && a[i]%5!=0){
			tong+=a[i];
			dem++;
		}
	}
	int tbc= tong/dem;
	printf("\nTrung binh cong la: %d", tbc);
	return tbc;
}

void DemSo(int a[], int n){
	int i,demso=0,x;
	printf("Nhap so x: "); 
	scanf("%d", &x);
	for(i=0;i<n;i++){
		if(a[i]<x){
			demso++;
		}
	}
	printf("So phan tu nho hon x la: %d", demso);
}

void KiemTra(int a[], int n){
	int i;
	int dem1=0, dem2=0;
	for(i=0;i<n-1;i++){
		if(a[i] > a[i+1] ){
			dem1++;
		}
		if(a[i] < a[i+1]){
			dem2++;
		}
	}
	if (dem1 == n - 1){
		printf("\nYES");
	} else if (dem2 == n - 1){
		printf("\nYES");
	} else {
		printf("\nNO");
	}
}


int main() {
	int i,n,x,a[100];
	printf("Nhap so phan tu n: ");
	scanf("%d",&n);
	NhapMang(a,n);
	DemSo(a,n);
	TBC(a,n);
	KiemTra(a,n);
}
