#include <stdio.h>
#include <conio.h>

float NhapMang(float a[], int n){
	int i;
	for(i=0 ;i<n ;i++){
		printf("Nhap phan tu a[%d]: ",i);
		scanf("%f",&a[i]);
	}
}

float XuatMang(float a[], int n)
{
	int i;
    for(i = 0;i < n;i++){
        printf(" %.2f ", a[i]);
    }
}

float TBC(int a[], int n){
	int i;
	int tong=0, dem=0;
	for(i=0;i<n;i++){
		if(a[i]%2==0){
			tong+=a[i];
			dem++;
		}
	}
	int tbc=tong/dem;
	printf("\nTrung binh cong la: %.2f", tbc);
	return tbc;
}

float SapXep(float a[], int n){
	int i,j,tg;
  for(i = 0; i < n - 1; i++){
        for(j = i + 1; j < n; j++){
            if(a[i] > a[j]){
                tg = a[i];
                a[i] = a[j];
                a[j] = tg;        
            }
        }
    }
    printf("\n");
    for( i = 0; i < n; i++){
        printf("%.2f ", a[i]);
    }
}

void ChuyenSo(int a[], int n){
	
}

int main() {
	int n,i,a[100];
	printf("Nhap so phan tu n: ");
	scanf("%d", &n);
	NhapMang(a,n);
	XuatMang(a,n);
	TBC(a,n);
	SapXep(a,n);
	ChuyenSo(a,n);
}
