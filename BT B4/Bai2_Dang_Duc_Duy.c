#include <stdio.h>
#include <conio.h>

void NhapMang(float a[], int n ){
	int i;
	for(i=0;i < n;i++)
	{
		printf("Nhap a[%d]: ", i);
		scanf("%f", &a[i]);
	}
}
void XuatMang(float a[], int n){
     int i;
        for(i = 0;i < n;++i){
        printf("%.2f ", a[i]);
    }
}

float Min(float a[], int n){
	int i;
    int	minNum=a[0];
	   for(i = 1;i < n;++i){
        if(a[i] < minNum) 
		minNum = a[i];
    }
    return minNum;
}

float Max(float a[], int n){
	int i;
    int	maxNum=a[0];
	   for(i = 1;i < n;++i){
        if(a[i] > maxNum) 
		maxNum = a[i];
    }
    return maxNum;
}

void HoanVi()

int main() {
	int  n;
	float a[50];
	do {
        printf("Nhap so phan tu n(2<=n<=50): ");
        scanf("%d", &n);
    } while (n < 2 || n > 50);
    NhapMang(a,n);
    XuatMang(a,n);
    printf("\nGia tri nho nhat cua mang la: %f", Min(a,n));
    printf("\nGia tri lon nhat cua mang la: %f", Max(a,n));
    return 0;
}

