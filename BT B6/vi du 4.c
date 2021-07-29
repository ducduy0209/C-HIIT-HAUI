#include <stdio.h>

void NhapMang(int a[], int n){
	int i;
	for(i=0 ;i<n ;i++){
		printf("Nhap phan tu a[%d]: ",i);
		scanf("%d",&a[i]);
	}
}

void XuatMang(int a[], int n)
{
	int i;
    for(i = 0;i < n;i++){
        printf("%d ", a[i]);
    }
}


void Chen(int a[], int *n,int vt){
	int i;
	for(i=*n; i>=vt ;i--){
		a[i] = a[i-1];
	}
	a[vt-1]=1;
	*n = *n+1;
}

//void Xoa(int a[], int *n, int vt){
//	int i;
//	for(i=vt-1; i < *n-1; i++){
//		a[i] = a[i+1];
//	}
//	*n= *n - 1;
//}
//// xoa

int main() {
	int n;
	int a[100];
	printf("n = ");
	scanf("%d", &n);
	NhapMang(a,n);
	Chen(a,&n,3);
//	Xoa(a,&n,3);
	XuatMang(a,n);
	return 0;
}
