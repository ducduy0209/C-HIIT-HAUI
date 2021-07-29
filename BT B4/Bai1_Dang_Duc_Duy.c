 #include <stdio.h>
#include <conio.h>

void NhapMang(int a[], int n)
{ 
    int i;
    for (i = 0; i < n; i++)
    {
        printf("a[%d] = ", i);
        scanf("%d",a[i]);
    }
}

void SapXep(int a[], int n){
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
    printf("\nMang da sap xep la: ");
    for( i = 0; i < n; i++){
        printf("%5d", a[i]);
    }
}
int Min(int a[], int n){
	int i;
    int	min=a[0];
	   for(i = 0;i < n;i++){
        if(min>a[i]){   
		min = a[i];
		}
    }
    printf("\nGia tri nho nhat cua mang la: %d", min);
    return min;
}
void Vitri(int a[], int n){
     int i;
     int x = Min(a, n);
	printf("\nVi tri dau tien cua so nho nhat la: ");
	for( i=0;i < n; i++){
		if(a[i] == x){
		printf(" %d", i+1);
		break;
		}
	}
}

int main() {
	int n,i,a[50];
	do
    {
        printf("Nhap so phan tu n(2<=n<=50): ");
        scanf("%d", &n);
    } while (n < 2 || n > 50);
    
    NhapMang(a,n);
    Vitri(a,n);
    SapXep(a,n);
}
