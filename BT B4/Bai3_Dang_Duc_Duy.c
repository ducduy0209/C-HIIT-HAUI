#include <stdio.h>
#include <conio.h>
#include <math>

void NhapMang(int a[], int n)
{ 
    int i;
    for (i = 0; i < n; i++)
    {
        printf("a[%d] = ", i);
        scanf("%d", &a[i]);
    }
}

void XuatMang(int a[], int n){
	int i;
    for(i = 0;i < n; ++i){
        printf("\nPhan tu a[%d] = %d", i, a[i]);
    }
}

int Kiemtra(int n){
	int x=sqrt(n);
	
}

int Tongcscp(int a[], int n){
	
}

int Tong34  

int main() {
	int i,n,a[50];
	do {
		printf("Nhap n (3 <= n <= 50): ");scanf("%d", &n);
	} while (n<3|| n>50);
	NhapMang(a,n);
	XuatMang(a,n);
}
