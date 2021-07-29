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

void Chen(int a[], int n,int vt, int k){
	int i,x;
	for(i=n; i>=vt ;i--){
		a[i] = a[i-1];
	}
	a[vt-1] = k;
}

void Xoa(int a[], int n, int vt){
	int i;
	for(i=vt-1; i < n-1; i++){
		a[i] = a[i+1];
	}
	n= n - 1;
} 

int main() {
	int n, a[100];
	printf("n= "); scanf("%d", &n);
	NhapMang(a,n);
	int x,k;
	scanf("%d",&x); scanf("%d",&k);
	Chen(a,n,x,k);
	n++;
	Xoa(a,n,x+1);
	n--;
	XuatMang(a,n);
	return 0;
}
