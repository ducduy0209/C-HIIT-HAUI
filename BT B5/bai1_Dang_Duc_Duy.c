#include <stdio.h>
#include <conio.h>

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

void SapXep(int a[], int n){
	int i,j,tg;
  for(i = 0; i < n - 1; i++){
        for(j = i + 1; j < n; j++){
            if(a[i] < a[j]){
                tg = a[i];
                a[i] = a[j];
                a[j] = tg;        
            }
        }
    }
    printf("\n");
    for( i = 0; i < n; i++){
        printf("%2d", a[i]);
    }
}

void KiemTra(int a[], int n){
	int i;
	int dem=0;
	for(i=0;i<n;i++){
		if(a[i]%2==0 && a[i-1]%2==0){
			printf("\nYES");
			break;
		} else {
			printf("\nNO");
			break;
		}
	}
}

void Tach(int a[], int n){
	int i, dem1=0, dem2=0;
	int b[100];
	int c[100];
	int p=0, m=0;
	for(i=0;i<n;i++){
		if(a[i] % 2 == 0) {
			b[m++] = a[i];
			dem1++;
		} else {
			c[p++] = a[i];
			dem2++;
		}
	} 
	if (dem1 == 0 || dem2 == 0){
		printf("\n-1");
} else {
	printf("\n");
	XuatMang(b,m);
	printf("- ");
	XuatMang(c,p);
}
}  

int main() {
	int n,i,a[100],b[100],c[100],n1,n2;
	do
    {
        printf("Nhap so phan tu n(3<=n<=50): ");
        scanf("%d", &n);
    } while (n < 3 || n > 50);
    
    NhapMang(a,n);
    XuatMang(a,n);
    KiemTra(a,n);
    SapXep(a,n);
    Tach(a,n);
}
